/*
The grammar for input is:
Calculation :
    Statement
    Print
    Quit
    Calculation Statement
Statement:
    Declaration
    Expression
Declaration:
    "let" Name "=" Expression
Statement:
    Expression
    Print
    Quit
Print :
    ;
Quit :
    q
Expression:
    Term
    Expression + Term
    Expression - Term
Term:
    Primary
    Term * Primary
    Term / Primary
    Term % Primary
Primary:
    Number
    ( Expression )
- Primary
+ Primary
Number:
    floalting-point-literal
*/

//=============================================================

// Features: +, - ,/ , * , % , variables

// How to use:
//      declaring variable : let var1 = 10;
//      end all expression with ';'
//      calling variable : var1 = 10;

/*
Example:
    10 + 2;
    = 12
*/

// P.S. if you just type ';' you will prompted to type again and again eg, ;;;;;;;;;;;;;;;;;;;;;................
//        if your stream of ';' is followed by expression then it is ok. eg ;;;;;;;;;;;;;;;;;;;;; 1+1;

#include <iostream>
#include <vector>
using namespace std;

double statement();
double declaration();
double expression();
double term();
double primary();
double get_value(string s);
double define_name(string var, double val);
bool is_declared(string var);
void calculate();
void clean_up_mess();
void set_value(string, double);
void error(string);

const string prompt = "> ";
const string result = "= ";
const string declkey = "let";
const char name = 'a';
const char let = 'L';
const char quit = 'q';
const char print = ';';
const char number = '8';

class Token {
public:
    char kind;
    double value;
    string name;

    Token(char ch)
        : kind(ch), value(0) {}

    Token(char ch, double val)
        : kind(ch), value(val) {}

    Token(char ch, string n)
        : kind(ch), name(n) {}
};

class Token_stream {
private:
    bool full;
    Token buffer;

public:
    Token_stream() : full(false), buffer(0){};
    Token get();
    void putback(Token t);
    void ignore(char c);
};

void Token_stream::putback(Token t) {
    if (full)
        error("putback() into a full buffer.");
    buffer = t;
    full = true;
}

Token Token_stream ::get() {
    if (full) {
        full = false;
        return buffer;
    }

    char ch;
    cin >> ch;
    switch (ch) {
    case print:
    case quit:
    case '(':
    case ')':
    case '+':
    case '-':
    case '*':
    case '/':
    case '%':
    case '=':
        return Token(ch);
        break;
    case '.':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        cin.putback(ch);
        double val;
        cin >> val;
        return Token(number, val);

    default:
        if (isalpha(ch)) {
            cin.putback(ch);
            string s = "";
            while (cin.get(ch) && isalpha(ch) || isdigit(ch)) s += ch;
            cin.putback(ch);
            if (s == declkey)
                return Token(let);
            return Token(name, s);
        }
        error("Bad Token");
        break;
    }
}

void Token_stream ::ignore(char c) {
    if (full && c == buffer.kind) {
        full = false;
        return;
    }
    full = false;

    char ch = 0;
    while (cin >> ch)
        if (ch == c)
            return;
}

class Variable {
public:
    string name;
    double value;
    Variable(string n, double v)
        : name(n), value(v) {}
};

Token_stream ts;
vector<Variable> var_table;

int main() {
    try {
        calculate();
        return 0;
    } catch (runtime_error& e) {
        cerr << e.what() << endl;
        return 1;
    } catch (...) {
        cerr << "Somthing went wrong";
        return 2;
    }
}

void calculate() {
    while (cin) {
        try {
            cout << prompt;
            Token t = ts.get();
            while (t.kind == print) t = ts.get();
            if (t.kind == quit)
                return;
            ts.putback(t);
            cout << result << statement() << endl;
        } catch (exception& e) {
            cerr << e.what() << endl;
            clean_up_mess();
        }
    }
}

double statement() {
    Token t = ts.get();
    switch (t.kind) {
    case let:
        return declaration();
    default:
        ts.putback(t);
        return expression();
    }
}

double primary() {
    Token t = ts.get();
    switch (t.kind) {
    case '(': {
        double d = expression();
        t = ts.get();
        if (t.kind != ')')
            error("')' expected");
        return d;
    }
    case number:
        return t.value;
        break;
    case '-':
        return -term();
    case '+':
        return term();
    case name: {
        Token next = ts.get();
        if (next.kind == '=') {
            double d = expression();
            set_value(t.name, d);
            return d;
        }
        ts.putback(next);
        return get_value(t.name);
    }
    default:
        ts.putback(t);
        error("primary expected");
    }
}

double term() {
    double left = primary();
    Token t = ts.get();
    while (true) {
        switch (t.kind) {
        case '*':
            left *= primary();
            t = ts.get();
            break;
        case '/': {
            double d = primary();
            if (d == 0)
                error("divided by zero");
            left /= d;
            t = ts.get();
            break;
        }
        case '%': {
            double right = primary();
            int i1 = int(right);
            if (i1 != right)
                error("right-hand operand of % not int");
            int i2 = int(left);
            if (i2 != left)
                error("left-hand operand of % not int");
            if (i1 == 0)
                error("%: divide by zero");
            left = i2 % i1;
            t = ts.get();
            break;
        }
        default:
            ts.putback(t);
            return left;
        }
    }
}

double expression() {
    double left = term();
    Token t = ts.get();
    while (true) {
        switch (t.kind) {
        case '+':
            left += term();
            t = ts.get();
            break;
        case '-':
            left -= term();
            t = ts.get();
            break;
        default:
            ts.putback(t);
            return left;
        }
    }
}

void clean_up_mess() {
    ts.ignore(print);
}

double get_value(string s) {
    for (int i = 0; i < var_table.size(); i++)
        if (var_table[i].name == s)
            return var_table[i].value;
    error("get:undefined variable '" + s + "'");
}

void set_value(string s, double d) {
    for (int i = 0; i < var_table.size(); i++)
        if (var_table[i].name == s) {
            var_table[i].value = d;
            return;
        }
    error("set:undefined varaible '" + s + "'");
}

bool is_decalred(string var) {
    for (int i = 0; i < var_table.size(); i++)
        if (var_table[i].name == var)
            return true;
    return false;
}

double define_name(string var, double val) {
    if (is_decalred(var))
        error(var + " decalred twice");
    var_table.push_back(Variable(var, val));
    return val;
}

double declaration() {
    Token t = ts.get();
    if (t.kind != name)
        error("name expected in declaration");
    string var_name = t.name;

    Token t2 = ts.get();
    if (t2.kind != '=')
        error("= missing in declaration" + var_name);

    double d = expression();
    define_name(var_name, d);
    return d;
}

inline void error(string st) {
    throw runtime_error(st);
}
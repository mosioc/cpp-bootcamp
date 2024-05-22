#include <fstream>
#include <string>

using std::ifstream; using std::ofstream; using std::string;
using std::endl;

int main()
{
    ifstream infile("in.txt");
    ofstream outfile("out.txt");

    string s;
    while (getline(infile, s))
        outfile << s << endl;

    return 0;
}

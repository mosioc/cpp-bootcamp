auto Correct(int i)
{
	if (i == 1)
		return i;             // return type deduced as int

	return Correct(i - 1) + i;  // ok to call it now
}

auto Wrong(int i)
{
	if (i != 1)
		return Wrong(i - 1) + i;  // Too soon to call this. No prior return statement.

	return i;               // return type deduced as int
}

int main()
{

}
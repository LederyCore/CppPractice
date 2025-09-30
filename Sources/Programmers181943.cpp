#include <iostream>
#include <string>
#include <vector>

using namespace std;


string Solution(string my_string, string overwrite_string, int s)
{
	string result;

	for (size_t i = 0; i < overwrite_string.size(); i++)
	{
		my_string[i + s] = overwrite_string[i];
	}
	
	return my_string;
}

int main()
{
	string my;
	string over;
	int s;

	cin >> my;
	cin >> over;
	cin >> s;

	cout << Solution(my, over, s);
}
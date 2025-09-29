#include <iostream>
#include <string>


using namespace std;


int main()
{
	string str;
	cin >> str;

	int length = str.length();

	for (size_t i = 0; i < length; i++)
	{
		char character = str[i];

		cout << character << endl;
	}

	return 0;
}
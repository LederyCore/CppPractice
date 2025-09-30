#include <iostream>
#include <string>

using namespace std;


int main()
{
	string str1;
	string str2;
	string result;

	cin >> str1;
	cin >> str2;

	for (size_t i = 0; i < str1.size(); i++)
	{
		result = result + str1[i] + str2[i];
	}

	cout << result;
}
#include <string>
#include <vector>

using namespace std;

string Solution(string my_string, int k)
{
	string result;
	for (int i = 0; i < k; i++)
	{
		result.append(my_string);
	}
	return result;
}
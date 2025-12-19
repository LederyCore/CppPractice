#include <iostream>
#include <vector>

using namespace std;


vector<int> solution(vector<int> num_list)
{
	int* lastNumptr = &num_list.back();

	int lastNum = *lastNumptr;
	int secondLastNum = *(lastNumptr - 1);

	if (lastNum > secondLastNum)
		num_list.push_back(lastNum - secondLastNum);
	else
		num_list.push_back(lastNum * 2);

	return num_list;
}
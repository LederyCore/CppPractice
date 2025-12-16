#include <string>
#include <vector>
#include <iostream>

using namespace std;


string solution(string code) 
{
    string answer = "";
    vector<char> ret;
	int mode = 0;

    for (int i = 0; i < code.size(); i++)
    {
        if (code[i] == '1')
        {
            mode == 0 ? 1 : 0;
        }

        if (mode == 0)
        {
            if (code[i] == '1')
            {
                mode = 1;
            }
            else
            {
                if (i % 2 == 0)
                {
					ret.push_back(code[i]);
                }
            }
        }
        else
        {
            if (code[i] == '1')
            {
                mode = 0;
            }
            else
            {
                if (i % 2 != 0)
                {
                    ret.push_back(code[i]);
                }
            }
        }

    }

	answer = ret.empty() ? "EMPTY" : string(ret.begin(), ret.end());
    return answer;
}
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) 
{
    vector<int> answer;

    for (int i = 0; i < queries.size(); i++) 
    {
        int min = -1;

        for (int j = queries[i][0]; j <= queries[i][1]; j++) 
        {
            if (queries[i][2] < arr[j]) 
            {
                if (min == -1 || arr[j] < arr[min]) 
                {
                    min = j;
                }
            }
        }

        if (min == -1) answer.push_back(-1);
        else answer.push_back(arr[min]);
    }

    return answer;
}
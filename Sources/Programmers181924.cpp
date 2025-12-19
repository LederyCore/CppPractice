//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(vector<int> arr, vector<vector<int>> queries) 
//{
//    vector<int> answer;
//
//
//	for (vector<int> q : queries)
//	{
//		int temp = 0;
//		int swapLeft = q[0];
//		int swapRight = q[1];
//
//		temp = arr[swapLeft];
//		arr[swapLeft] = arr[swapRight];
//		arr[swapRight] = temp;
//	}
//
//
//    return arr;
//}
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> array) {
    // 1. 각 숫자의 빈도수 계산
    map<int, int> numCount;
    for (int num : array) {
        numCount[num]++;
    }

    int maxFreq = 0;
    int answer = -1;
    bool isDuplicate = false;

    // 2. 최빈값 탐색 (C++17 Structured Bindings 사용)
    for (const auto& [num, count] : numCount) {
        if (count > maxFreq) {
            // 새로운 최댓값을 발견한 경우
            maxFreq = count;
            answer = num;
            isDuplicate = false; // 중복 상태 리셋
        }
        else if (count == maxFreq) {
            // 기존 최댓값과 동일한 빈도수를 발견한 경우
            isDuplicate = true;
        }
    }

    // 3. 중복 여부에 따른 결과 반환
    return isDuplicate ? -1 : answer;
}
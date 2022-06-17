#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = -1;
    int allSumNum = 45;
    int sumNum = 0;
    
    for (int i = 0; i < numbers.size(); ++i)
    {
        sumNum += numbers[i];
    }
    answer = allSumNum - sumNum;
    
    return answer;
}
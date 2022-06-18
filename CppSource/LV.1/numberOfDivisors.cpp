#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    vector<int> squares;
    vector<int> divisor;
    
    for (int i = 2; i < 32; ++i)
    {
        squares.push_back(i*i);
    }
    
    for (int i = 0; i < (right-left+1); ++i)
    {
        divisor.push_back(left+i);
    }
    
    for (int i = 0; i < divisor.size(); ++i)
    {
        if (find(squares.begin(), squares.end(), divisor[i]) != squares.end() || divisor[i] == 1)
        {
            divisor[i] = -(divisor[i]);
        }
    }
    
    for (int i = 0; i < divisor.size(); ++i)
    {
        answer += divisor[i];
    }
    
    return answer;
}
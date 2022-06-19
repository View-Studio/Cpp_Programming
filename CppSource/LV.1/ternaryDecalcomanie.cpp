#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    long long ternary = 0;
    long long quotient = n;
    long long remainder = 0;
    vector<int> ternaryVec;
    
    for (int i = 0; i < 1000000000; ++i)
    {
        remainder = quotient % 3;
        quotient = quotient / 3;
        ternaryVec.push_back(remainder);
        if (quotient <= 0)
        {
            break;
        }
    }
    
    for (int i = 0; i < ternaryVec.size(); ++i)
    {
        if (i == ternaryVec.size()-1)
        {
            ternary += ternaryVec[i];
        }
        else
        {
            ternary += ternaryVec[i]*3;
        }
    }
    
    for (int i = 0; i < ternaryVec.size(); ++i)
    {
        if (ternary <= 2)
        {
            answer = ternary;
        }
        else
        {
            if (i == 0 && i < ternaryVec.size()-1)
            {
                answer = (ternaryVec[i]*3) + ternaryVec[i+1];
            }
            else if (i != 0 && i < ternaryVec.size()-1)
            {
                answer = (answer*3) + ternaryVec[i+1];
            }
        }
    }
    
    return answer;
}
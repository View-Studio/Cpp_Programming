#include <iostream>
#include <vector>
#include <string>

using namespace std;

int intSize(int num);
int square(int num, int upNum);

int solution(int n)
{
    int answer = 0;
    int tenSq = square(10, (intSize(n)-2));
    int oneNumber = 0;
    int quotient = 1;
    int frontNum = 0;
    int oneNumSave = 0;
    vector<int> integerVec;
    
    if (intSize(n) != 1)
    {
        for (int i = 0; i < intSize(n); ++i)
        {
            oneNumber = n / (tenSq/quotient);
            oneNumSave = oneNumber;
            oneNumber -= frontNum;
            frontNum = oneNumSave*10;
            integerVec.push_back(oneNumber);
            quotient *= 10;
        }
    }
    else {
        integerVec.push_back(n);
    }
    
    for (int i = 0; i < integerVec.size(); ++i)
    {
        answer += integerVec[i];
    }

    return answer;
}

int intSize(int num)
{
    string strNum;
    strNum = to_string(num);
    
    return strNum.size();
}

int square(int num, int upNum)
{
    int temp = num;
    for (int i = 0; i < upNum; ++i)
    {
        temp = temp*num;
    }
    return temp;
}
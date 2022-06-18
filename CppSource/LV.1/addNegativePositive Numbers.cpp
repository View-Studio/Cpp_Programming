#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    vector<int> originNum(absolutes.size());
    
    for (int i = 0; i < absolutes.size(); ++i)
    {
        if (signs[i] == true)
        {
            originNum[i] = absolutes[i];
        }
        else
        {
            originNum[i] = absolutes[i] * (-1);
        }
    }
    
    for (int i = 0; i < originNum.size(); ++i)
    {
        answer += originNum[i];
    }
    
    return answer;
}
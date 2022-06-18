#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string s) {
    int answer = 0;
    int num = 0;
    vector<char> numChar = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    vector<string> numEng = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<string> oneMore;
    vector<string> nMore;
    map<string, char> StrToChar;
    
    for (int i = 0; i < numEng.size(); ++i)
    {
        StrToChar[numEng[i]] = numChar[i];
    }
    
    for (int i = 0; i < numEng.size(); ++i)
    {
        if (s.find(numEng[i]) != string::npos)
        {
            int startIdx = s.find(numEng[i]);
            int size = numEng[i].size();
            s[s.find(numEng[i])] = StrToChar[numEng[i]];
            s.erase(startIdx+1, size-1);
            oneMore.push_back(numEng[i]);
        }
    }
    
    
    for (int j = 0; j < oneMore.size()+num+1; ++j)
    {
        for (int i = 0; i < oneMore.size(); ++i)
        {
            if (s.find(oneMore[i]) != string::npos)
            {
                int startIdx = s.find(oneMore[i]);
                int size = oneMore[i].size();
                s[s.find(oneMore[i])] = StrToChar[oneMore[i]];
                s.erase(startIdx+1, size-1);
                nMore.push_back(oneMore[i]);
                ++num;
            }
        }
        num = oneMore.size()-num;
        oneMore.clear();
        for (int i = 0; i < nMore.size(); ++i)
        {
            oneMore.push_back(nMore[i]);
        }
        nMore.clear();
    }
    
    answer = stoi(s);
    
    return answer;
}
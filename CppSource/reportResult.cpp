#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer(static_cast<int>(id_list.size()));
    map <string, int> isReportedNum;
    map<string, vector<string>> pairReportName;
    vector<string> blackList;
    int blankIdx = 0;
    string reportUser = " ";
    string isReportedUser = " ";
    int addNum = 1;
    
    for (int i = 0; i < report.size(); ++i)
    {
        blankIdx = report[i].find(" ");
        reportUser = report[i].substr(0, blankIdx);
        isReportedUser = report[i].substr(blankIdx+1);
        
        if (find(pairReportName[reportUser].begin(), pairReportName[reportUser].end(), isReportedUser) == pairReportName[reportUser].end())
        {
            pairReportName[reportUser].push_back(isReportedUser);
            isReportedNum[isReportedUser] += addNum;
        }
    }
    
    for (int i = 0; i < id_list.size(); ++i)
    {
        if (isReportedNum[id_list[i]] >= k) {
            blackList.push_back(id_list[i]);
        }
    }
    
    for (int i = 0; i < id_list.size(); ++i)
    {
        for (int j = 0; j < blackList.size(); ++j)
        {
            if (blackList.size() > 0 && find(pairReportName[id_list[i]].begin(), pairReportName[id_list[i]].end(), blackList[j]) != pairReportName[id_list[i]].end())
            {
                answer[i] += 1;
            }
        }
    }
    
    return answer;
}
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<vector<int>> personAns = {{1, 2, 3, 4, 5}, {2, 1, 2, 3, 2, 4, 2, 5}, {3, 3, 1, 1, 2, 2, 4, 4, 5, 5}};
    vector<int> score(3);
    int n = 0;
    int k = 0;
    
    for (int i = 0; i < personAns.size(); ++i){
        for (int j = 0; j < answers.size(); ++j)
        {
            if (n == personAns[i].size())
            {
                n = 0;
                k+=personAns[i].size();
            }
            if (answers[j] == personAns[i][j-k])
            {
                score[i] += 1;
            }
            ++n;
        }
        n = 0;
        k = 0;
    }
    
    if (score[0] > score[1])
    {
        if (score[0] > score[2])
        {
            answer.push_back(1);
        }
        else if (score[0] < score[2])
        {
            answer.push_back(3);
        }
        else if (score[0] == score[2])
        {
            answer.push_back(1);
            answer.push_back(3);
        }
    }
    else if (score[0] < score[1])
    {
        if (score[1] > score[2])
        {
            answer.push_back(2);
        }
        else if (score[1] < score[2])
        {
            answer.push_back(3);
        }
         else if (score[1] == score[2])
        {
            answer.push_back(2);
            answer.push_back(3);
        }
    }
    else if (score[0] == score[1])
    {
        if (score[0] > score[2])
        {
            answer.push_back(1);
            answer.push_back(2);
        }
        else if (score[0] < score[2])
        {
            answer.push_back(3);
        }
        else if (score[0] == score[2])
        {
            answer.push_back(1);
            answer.push_back(2);
            answer.push_back(3);
        }
    }

    return answer;
}
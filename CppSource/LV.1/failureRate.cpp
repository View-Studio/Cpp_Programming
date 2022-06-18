#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<int> failStage(N);
    vector<int> successStage(N);
    vector<double> failPer (successStage.size());
    vector<int> stageVec (N);
    double temp = 0;
    
    sort(stages.begin(), stages.end());
    
    for (int i = 0; i < N; ++i)
    {
        stageVec[i] = i+1;
    }
    
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < stages.size(); ++j)
        {
            if (i+1 == stages[j])
            {
                failStage[i] += 1;
            }
            else if (i+1 < stages[j])
            {
                successStage[i] += 1;
            }
        }
    }
    
    for (int i = 0; i < successStage.size(); ++i)
    {
        failPer[i] = (double) failStage[i] / (failStage[i]+successStage[i]);
    }
    
    for (int i = 0; i < successStage.size(); ++i)
    {
        for (int j = 0; j < successStage.size()-i-1; ++j)
        {
            if (failPer[j] < failPer[j+1])
            {
                temp = stageVec[j];
                stageVec[j] = stageVec[j+1];
                stageVec[j+1] = temp;
                
                temp = failPer[j];
                failPer[j] = failPer[j+1];
                failPer[j+1] = temp;
            }
        }
        temp = 0;
    }
    
    for (int i = 0; i < stageVec.size(); ++i)
    {
        answer.push_back(stageVec[i]);
    }
    
    return answer;
}
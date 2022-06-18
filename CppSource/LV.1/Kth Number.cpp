#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> saveVec;
    
    for (int i = 0; i < commands.size(); ++i)
    {
        saveVec.insert(saveVec.begin(), array.begin()+commands[i][0]-1, array.begin()+commands[i][1]);
        sort(saveVec.begin(), saveVec.end());
        answer.push_back(saveVec[commands[i][2]-1]);
        saveVec.clear();
    }
    
    return answer;
}
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> pickThings;

    for (int i = 0; i < moves.size(); ++i)
    {
        for (int j = 0; j < board.size(); ++j)
        {
            if(board[j][moves[i]-1] != 0)
            {
                pickThings.push_back(board[j][moves[i]-1]);
                board[j][moves[i]-1] = 0;
                break;
            }
        }
    }
    
    for (int i = 0; i < pickThings.size(); ++i)
    {
        if (pickThings[i] == pickThings[i+1])
        {
            pickThings.erase(pickThings.begin()+i, pickThings.begin()+i+2);
            answer += 2;
            i = -1;
        }
        
    }
    
    return answer;
}
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

void result(int idx, int winStack, vector<int>& answer) {
    for (int i = 0; i < 7; ++i)
    {
        if (winStack == i)
        {
            if (winStack == 0)
            {
                answer[idx] = 6;
            }
            else
            {
                answer[idx] = 7 - winStack;
            }
        }
    }
}

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer(2);
    map<int, int> winLottos;
    map<int, int> userLottos;
    int winStack = 0;

    for (int i = 0; i < win_nums.size(); ++i)
    {
        winLottos[win_nums[i]] = win_nums[i];
    }

    for (int i = 0; i < lottos.size(); ++i)
    {
        if (lottos[i] == 0)
        {
            userLottos[lottos[i]] += 1;
        }
        else {
            userLottos[lottos[i]] = lottos[i];
        }
    }

    for (int i = 0; i < win_nums.size(); ++i)
    {
        if (lottos[i] == 0)
        {
            winStack += 1;
            continue;
        }
        else if (find(win_nums.begin(), win_nums.end(), userLottos[lottos[i]]) != win_nums.end())
        {
            winStack += 1;
        }
    }
    result(0, winStack, answer);

    winStack = 0;
    for (int i = 0; i < win_nums.size(); ++i)
    {
        if (find(win_nums.begin(), win_nums.end(), userLottos[lottos[i]]) != win_nums.end())
        {
            if (lottos[i] != 0)
            {
                winStack += 1;
            }
        }
    }
    result(1, winStack, answer);

    return answer;
}
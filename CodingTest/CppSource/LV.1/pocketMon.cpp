#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    vector<int> gotPocketMon;
    
    for (int i = 0; i < nums.size(); ++i)
    {
        if(gotPocketMon.size() < nums.size()/2 && find(gotPocketMon.begin(), gotPocketMon.end(), nums[i]) == gotPocketMon.end())
        {
            gotPocketMon.push_back(nums[i]);
        }
    }
    
    answer = gotPocketMon.size();
    
    return answer;
}
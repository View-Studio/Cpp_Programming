#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int sum = 0;
    
    sort(d.begin(), d.end());
    
    for (int i = 0; i < d.size(); ++i)
    {
        sum += d[i];
        if (sum > budget)
        {
            answer = i;
            break;
        }
        else if (sum == budget)
        {
            answer = i+1;
            break;
        }
        else if (i == d.size()-1 && sum < budget)
        {
            answer = i+1;
            break;
        }
    }
    
    return answer;
}
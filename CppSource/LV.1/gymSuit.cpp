#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> exerciseCloth(n);
    int canNotAttend = 0;
    
    for (int i = 0; i < n; ++i)
    {
        if (find(lost.begin(), lost.end(), i+1) != lost.end())
        {
            if (find(reserve.begin(), reserve.end(), i+1) != reserve.end())
            {
                exerciseCloth[i] = 1;
            }
            else
            {
                exerciseCloth[i] = 0;
            }
        }
        else
        {
            if (find(reserve.begin(), reserve.end(), i+1) != reserve.end())
            {
                exerciseCloth[i] = 2;
            }
            else
            {
                exerciseCloth[i] = 1;
            }
        }
    }
    
    for (int i = 0; i < n; ++i)
    {
        if (exerciseCloth[i] >= 2)
        {
            if (i != 0 && exerciseCloth[i-1] == 0)
            {
                exerciseCloth[i] = 1;
                exerciseCloth[i-1] = 1;
            }
            else if (exerciseCloth[i+1] == 0)
            {
                exerciseCloth[i] = 1;
                exerciseCloth[i+1] = 1;
            }
        }
    }
    
    for (int i = 0; i < exerciseCloth.size(); ++i)
    {
        if (exerciseCloth[i] == 0)
        {
            canNotAttend += 1;
        }
    }
    
    answer = n - canNotAttend;
    
    return answer;
}
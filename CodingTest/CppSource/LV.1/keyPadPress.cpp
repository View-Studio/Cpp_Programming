#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int abs(int num);

string solution(vector<int> numbers, string hand) {
    string answer = "";
    vector<vector<int>> keyPad = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 0, 11}
    };
    bool touchRightHand = true;
    vector<int> leftHand = {3, 0};
    vector<int> rightHand = {3, 2};
    int centerIdx = 0;
    int rightDis = 0;
    int leftDis = 0;
    
    for (int i = 0; i < numbers.size(); ++i)
    {
        if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7)
        {
            touchRightHand = false;
            for (int j = 0; j < keyPad.size(); ++j)
            {
                if (numbers[i] == keyPad[j][0])
                {
                    leftHand[0] = j;
                    leftHand[1] = 0;
                }
            }
        }
        else if (numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9)
        {
            touchRightHand = true;
            for (int j = 0; j < keyPad.size(); ++j)
            {
                if (numbers[i] == keyPad[j][2])
                {
                    rightHand[0] = j;
                    rightHand[1] = 2;
                }
            }
        }
        else if(numbers[i] == 2 || numbers[i] == 5 || numbers[i] == 8 || numbers[i] == 0)
        {
            for (int j = 0; j < keyPad.size(); ++j)
            {
                if (numbers[i] == keyPad[j][1])
                {
                    centerIdx = j;
                }
            }
            rightDis = abs(rightHand[0]-centerIdx)+abs(rightHand[1]-1);
            leftDis = abs(leftHand[0]-centerIdx)+abs(leftHand[1]-1);
            if (rightDis<leftDis)
            {
                touchRightHand = true;
                rightHand[0] = centerIdx;
                rightHand[1] = 1;
            }
            else if (rightDis>leftDis)
            {
                touchRightHand = false;
                leftHand[0] = centerIdx;
                leftHand[1] = 1;
            }
            else if (rightDis==leftDis)
            {
                if (hand=="right")
                {
                    touchRightHand = true;
                    rightHand[0] = centerIdx;
                    rightHand[1] = 1;
                }
                else if (hand=="left")
                {
                    touchRightHand = false;
                    leftHand[0] = centerIdx;
                    leftHand[1] = 1;
                }
            }
        }
        
        
        if (touchRightHand)
        {
            answer += 'R';
        }
        else
        {
            answer += 'L';
        }
    }
    
    return answer;
}

int abs(int num)
{
    if (num < 0)
    {
        num = -num;
    }
    return num;
}
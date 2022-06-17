#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int myLowercase(int upper);
void delPoint (string& new_id);

string solution(string new_id) {
    string answer = "";
    vector<char> delSpecialChar = {'~', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '=', '+', '[', ']', '}', '{', ':', '?', ',', '<', '>', '/'};
    
    for (int i = 0; i < new_id.size(); ++i)
    {
        new_id[i] = myLowercase(new_id[i]);
    }
    
    for (int i = 0; i < new_id.size(); ++i)
    {
        if (find(delSpecialChar.begin(), delSpecialChar.end(), new_id[i]) != delSpecialChar.end())
        {
            new_id.erase(i, 1);
            --i;
        }
    }
    
    for (int i = 1; i < new_id.size(); ++i)
    {
        char temp = new_id[i-1];
        if (temp==new_id[i] && temp=='.')
        {
            new_id.erase(i-1, 1);
            --i;
        }
    }
    
    delPoint(new_id);
    if (new_id.empty())
    {
        new_id.push_back('a');
    }
    
    if (new_id.size() >= 16)
    {
        new_id.erase(15, new_id.size()-15);
    }
    
    delPoint(new_id);
    for (int i = 0; i < new_id.size(); ++i)
    {
        if (new_id.size() <= 2)
        {
            new_id.push_back(new_id.back());
        }
        else
        {
            break;
        }
    }
    
    answer = new_id;
    
    return answer;
}

int myLowercase(int upper)
{
    if (upper >= 'A' && upper <= 'Z')
    {
        upper = upper - 'A' + 'a';
    }
    
    return upper;
}

void delPoint (string& new_id)
{
    if (new_id.front() == '.')
    {
        new_id.erase(0, 1);
    }
    else if (new_id.back() == '.')
    {
        new_id.erase(new_id.size()-1, 1);
    }
}
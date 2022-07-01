#include <bits/stdc++.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
bool isMatched(char a, char b)
{
    return (a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']');
}

bool isBalanced(string str)
{
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            s.push(str[i]);
        }
        else
        {
            if (s.empty() == true)
            {
                return false;
            }
            if (isMatched(s.top(), str[i]) == false)
            {
                return false;
            }
            else
            {
                s.pop();
            }
        }
    }
    return (s.empty() == true);
}
int main()
{
    string str;
    cout << "Enter the string : ";
    cin >> str;
    cout << endl;
    if (isBalanced(str))
    {
        cout << "Balanced\n";
    }
    else
    {
        cout << "Not balanced\n";
    }
    return 0;
}
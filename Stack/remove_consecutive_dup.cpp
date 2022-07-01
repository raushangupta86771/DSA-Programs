#include <bits/stdc++.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    stack<char> s;
    s.push(str[0]);
    cout << s.top();
    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] != s.top())
        {
            s.push(str[i]);
            cout << s.top();
        }
    }
    return 0;
}
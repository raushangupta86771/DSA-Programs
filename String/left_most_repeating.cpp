#include <bits/stdc++.h>
using namespace std;
int areAnagram(string &s1)
{

    for (int i = 0; i < s1.length(); i++)
    {
        for (int j = i + 1; j < s1.length(); j++)
        {
            if (s1[i] == s1[j])
            {
                return i;
            }
        }
    }
    return -1;
}

int main()
{
    string str1 = "acb";
    cout <<areAnagram(str1);
    return 0;
}

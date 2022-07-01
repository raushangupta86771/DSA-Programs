#include <iostream>
#include <set>
using namespace std;
int main()
{
    int arr[] = {2, 8, 30, 15, 25, 12};
    int len = 6;
    cout << "-1 ";
    set<int> s;
    s.insert(arr[0]);
    for (int i = 1; i < len; i++)
    {
        if (s.lower_bound(arr[i]) != s.end())
        {
            cout << *(s.lower_bound(arr[i])) << " ";
        }
        else
        {
            cout << "-1 ";
        }
        s.insert(arr[i]);
    }
    return 0;
}
#include <bits/stdc++.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
void span(int arr[], int n)
{
   s.push(0); stack<int> s;
    
    cout << "1, ";
    for (int i = 1; i < n; i++)
    {
        int span;
        while (s.empty() == false && arr[i] >= arr[s.top()])
        {
            s.pop();
        }
        if (s.empty() == true)
        {
            span = i + 1;
        }
        else
        {
            span = i - s.top();
        }
        cout << span << ", ";
        s.push(i);
    }
}
int main()
{
    int arr[] = {60, 10, 20, 15, 35, 50};
    span(arr, 6);
    return 0;
}
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int front = 0;
int rear;
void generate(int arr[], int n)
{
    int x = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + x);
    queue<int> q;
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        q.push(arr[i]);
    }
    rear = len - 1;
    int fr=q.front();
    while (q.size() <= n)
    {
        int val = q.front() * 10 + fr;
        q.pop();
        q.push(val);
        val=q.front()*10 + 
    }
}
int main()
{
    int arr[] = {5, 6};
    int n;
    cout << "Enter digit : ";
    cin >> n;
    cout << endl;
    generate(arr, n);
    return 0;
}
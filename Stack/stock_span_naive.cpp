#include <bits/stdc++.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
void printSpan(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int span = 1;
        for (int j = i - 1; j >= 0 && arr[j] <= arr[i]; j--)
        {
            span++;
        }
        cout << span << ", ";
    }
}
int main()
{
    int arr[] = {1, 3, 4, 6, 7, 8};
    int size = 6;
    printSpan(arr, size);
    return 0;
}
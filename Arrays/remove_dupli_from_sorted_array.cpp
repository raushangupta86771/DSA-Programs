#include <iostream>
using namespace std;
void rev(int arr[], int n);
int main()
{
    int ar[] = {1, 7, 7, 7, 9, 9, 9, 10, 10};
    rev(ar, 9);
    return 0;
}
void rev(int arr[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[res - 1] != arr[i])
        {
            arr[res] = arr[i];
            ++res;
        } 
    }
    
    for (int i = 0; i < res; i++)
    {
        cout << arr[i] << " ";
    }
}
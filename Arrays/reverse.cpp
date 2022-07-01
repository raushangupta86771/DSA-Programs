#include <iostream>
using namespace std;
void rev(int arr[], int n);
int main()
{
    int ar[] = {1, 7, 3, 4, 8};
    rev(ar, 5);
    return 0;
}
void rev(int arr[], int n)
{
    int newarr[100];
    int x = 0;
    for (int i = n - 1; i >= 0; i--)
    {

        newarr[x] = arr[i];
        x++;
    }
    for (int i = 0; i < x; i++)
    {
        cout << newarr[i]<<" ";
    }
}
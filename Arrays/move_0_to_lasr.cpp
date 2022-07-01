#include <iostream>
using namespace std;
void rev(int arr[], int n);
int main()
{
    int ar[] = {1, 7, 7, 0, 9, 0, 9, 10, 10};
    rev(ar, 9);
    return 0;
}
void rev(int arr[], int n)
{
    int last = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int x = i; x < n; x++)
            {
                arr[x] = arr[x + 1];
                arr[last] = 0;
            }
            last--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
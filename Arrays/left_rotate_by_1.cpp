#include <iostream>
using namespace std;
void rev(int arr[], int n, int d);
int main()
{
    int ar[] = {1, 7, 7, 0, 87, 9};
    rev(ar, 6, 4);
    return 0;
}
void rev(int arr[], int n, int d)
{
    int new_temp[n];
    int l = n - d;
    int k = n - d;
    int index = n - d;
    for (int i = 0; i < d; i++)
    {
        new_temp[index] = arr[i];
        index++;
    }

    for (int i = 0; i < l; i++)
    {
        new_temp[i] = arr[k - 1];
        k++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << new_temp[i] << " ";
    }
}





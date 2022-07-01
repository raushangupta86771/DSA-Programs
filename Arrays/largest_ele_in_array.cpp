#include <iostream>
using namespace std;
int largest(int arr[], int n);
int main()
{
    int arr[]={1, 21, 4, -5, 67};
    cout << largest(arr, 5);
    return 0;
}
int largest(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            return arr[i];
        }
    }
    return -1;
}
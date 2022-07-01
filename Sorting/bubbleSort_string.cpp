#include <iostream>
using namespace std;
void bSearch(string arr[], int n)
{
    string temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    string arr[100];
    int n;
    cout << "Enter Size of array : ";
    cin >> n;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    bSearch(arr, n);
    return 0;
}

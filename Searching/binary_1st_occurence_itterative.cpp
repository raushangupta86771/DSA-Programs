#include <iostream>
using namespace std;
int bSearch(string arr[], int n, string x)
{
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            if (mid == 0 || arr[mid - 1] != arr[mid])
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    string arr[100];
    int n;
    cout << "Enter Size of string : ";
    cin >> n;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    string ele;
    cout << "Enter element to search : ";
    cin >> ele;
    cout << endl;
    cout << bSearch(arr, n, ele);
    return 0;
}

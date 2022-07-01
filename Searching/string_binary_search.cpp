#include <iostream>
using namespace std;
int bSearch(string arr[], int low, int high, string x)
{
    int mid = (low + high) / 2;
    if (arr[mid] == x)
    {
        return mid;
    }
    else if (arr[mid] > x)
    {
        bSearch(arr, low, mid - 1, x);
    }
    else
    {
        bSearch(arr, mid + 1, high, x);
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
    int l = 0, h = n - 1;
    string ele;
    cout << "Enter element to search : ";
    cin >> ele;
    cout << endl;
    cout << bSearch(arr, l, h, ele);
    return 0;
}


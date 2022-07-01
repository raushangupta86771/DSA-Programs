#include <iostream>
using namespace std;
void printBoundary(int **arr, int r, int c)
{
    if (r == 1)
    {
        for (int i = 0; i < c; i++)
        {
            cout << arr[0][i] << " ";
        }
        cout << endl;
    }
    else if (c == 1)
    {
        for (int i = 0; i < r; i++)
        {
            cout << arr[i][0] << " ";
        }
    }
    else
    {
        for (int i = 0; i < c; i++)
        {
            cout << arr[0][i] << " ";
        }
        for (int i = 1; i < r; i++)
        {
            cout << arr[i][c - 1] << " ";
        }
        for (int i = c - 2; i >= 0; i--)
        {
            cout << arr[r - 1][i] << " ";
        }
        for (int i = r - 2; i >= 1; i--)
        {
            cout << arr[i][0] << " ";
        }
    }
}
int main()
{
    int m, n;
    cout << "Enter both rows : ";
    cin >> m >> n;
    cout << endl;
    int *arr[m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cout << "Enter index : " << i << " " << j << " ele : ";
            cin >> arr[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    printBoundary(arr, m, n);
    return 0;
}
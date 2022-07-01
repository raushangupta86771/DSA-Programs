#include <iostream>
using namespace std;
void printSnake(int **arr, int m, int n)
{
    bool dir = true;
    for (int i = 0; i < m; i++)
    {
        if (dir == true)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j]<<" ";
            }
            cout << endl;
            dir = false;
            break;
        }
        if (dir == false)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << arr[i][j]<<" ";
            }
            cout << endl;
            dir = true;
            break;
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
            cout << endl;
        }
    }
    printSnake(arr, m, n);
    return 0;
}
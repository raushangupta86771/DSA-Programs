#include <iostream>
using namespace std;
void printArr(int **arr, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout<<endl;
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
            arr[i][j] = i;
        }
    }
    printArr(arr,m,n);
    return 0;
}
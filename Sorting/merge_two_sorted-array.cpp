#include <iostream>
using namespace std;
void sort(int a[], int b[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else
        {
            cout << b[j] << " ";
            j++;
        }
    }
    while (i < n)
    {
        cout << a[i] << " "; 
        i++;
    }
    while (j < m)
    {
        cout << b[j] << " ";
        j++;
    }
}
int main()
{
    int a[] = {10, 20, 30, 77, 98, 453};
    int b[] = {1, 30, 30, 80, 98, 463};
    sort(a, b, 6, 6);
    return 0;
}
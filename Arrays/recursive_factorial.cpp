#include <iostream>
using namespace std;
int fun(int x, int p);
int main()
{
    int n, p;
    cin >> n >> p;
    int num = fun(n,p);
    cout << num;
    return 0;
}
int fun(int x, int p)
{
    if (p == 0)
    {
        return 1;
    }
    else
    {
        return x * fun(x, p-1);
    }
}
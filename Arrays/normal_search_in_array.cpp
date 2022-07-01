#include <iostream>
using namespace std;
int fun(int arrr[], int x, int size);
int main()
{
    int arr[100];
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    cout << endl;
    cout << "Enter elements : \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    };
    int ele;
    cout << "Enter element to search : ";
    cin >> ele;
    cout << endl;
    int index=fun(arr, ele, n);
    cout<<"At index "<<index;
    return 0;
}


int fun(int arrr[],int x, int size)
{
    for(int i=0 ; i<size; i++)
    {
        if(arrr[i]==x)
        {
            return i;
        }
    }
    return -1;
}
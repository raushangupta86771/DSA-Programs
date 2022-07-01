#include <iostream>
using namespace std;
void rev(int arr[], int n);
int main()
{
    int ar[] = {1, 7, 7, 0, 87, 9,122,635,44};
    rev(ar, 9);
    return 0;
}
void rev(int arr[], int n)
{
   int a=0;
    for(int i=0; i<n ; i++)
    {
        bool flag = false;
        for(int j= i+1; j<n; j++)
        {
            if(arr[j]>=arr[i])
            {
                flag = true;
                break;
            }
        }
        if(flag==false)
        {
            arr[a]=arr[i];
            a++;
        }
    }
    for(int i=0; i<a ; i++)
    {
        cout<<arr[i]<<" ";
    }
}


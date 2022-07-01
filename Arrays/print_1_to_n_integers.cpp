#include <iostream>
using namespace std;
void fun(int x);
int p = 1;
int main()
{
    int n;
    cin>>n;
    fun(n);
    return 0;
}
void fun(int x)
{
  if(x==0){return;};
  fun(x-1);
  cout<<x<<endl;  
}
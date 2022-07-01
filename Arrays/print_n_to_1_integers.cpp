#include<iostream>
using namespace std;
void fun(int x);
int main(){
int n;
cin>>n;
fun(n);
return 0;
}
void fun(int x)
{
    if(x==0)
    {
        return ;
    };
    cout<<x<<endl;
    return fun(x-1);
}
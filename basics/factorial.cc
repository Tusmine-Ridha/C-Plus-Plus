#include<iostream>
using namespace std;

int recursive(int num)
{
    if(num == 0)
     return 1;

    return num * recursive(num - 1);
}

int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<recursive(n)<<endl;
     return 0;
}

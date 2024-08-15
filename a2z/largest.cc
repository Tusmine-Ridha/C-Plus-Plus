//largest of three numbers using if
#include <bits/stdc++.h>
using namespace std;

int largest(int x, int y, int z)
{
    if(x>=y)
    {
        if(x>=z)
        {
            cout<<"The largest value is: "<< x<<endl;
        }
        else
        {
             cout<<"The largest value is: "<< z<<endl;
        }
    }
    else
    {
        if(y>=z)
        {
          cout<<"The largest value is: "<< y<<endl;
        }
        else
        {
            cout<<"The largest value is: "<< z<<endl;
        }
    }
    return 0;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    largest(a,b,c);

    return 0;

}

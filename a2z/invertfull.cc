//inverted pyramid of *
#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{

    for(int i = n; i>0; i--)
    {
        for(int k=0; k<n-i; k++)
        {
            cout<<" ";

        }
        for(int j=i; j<=i*2-1; j++)
        {
          cout<<"*"<<" ";

        }
        cout<<endl;
    }
}

int main()
{

    int n;
    cin>>n;
    pattern1(n);


    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int primerange(int l, int r)
{
    for(int i=l; i<=r; i++)
    {
        if (i == 1 || i == 0)
            continue;

        int flag = 1;

        for(int j=2; j<=i/2; ++j)
        {
            if(i%j == 0)
            {
                flag =0;
                break;
            }

        }

        if(flag == 1)
        {
            cout<<i<<" ";
        }
    }
    cout<<"\n";
    return 0;
}
int main()
{
    int a, b;
    cout<<"enter the range: ";
    cin>>a>>b;
    primerange(a,b);

    return 0;
}

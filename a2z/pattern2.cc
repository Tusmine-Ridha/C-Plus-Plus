#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{

    for(int i = 0; i< n; i++)
    {
        for(int j=0; j<i+1; j++)
        {
          cout<<i+1<<" ";

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

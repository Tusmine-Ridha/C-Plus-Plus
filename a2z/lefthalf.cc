
#include <bits/stdc++.h>
using namespace std;

int righthalf(int rows)
{
    for(int i =rows; i>0; i--)
    {
        for(int j=0; j<=rows; j++)
        {
            if(j>=i)
             cout<<"*";

             else
             cout<<" ";
        }
        cout<<"\n";

    }
    return 0;
}

int main()
{
   int rows;
   cin>>rows;
   righthalf(rows);

    return 0;
}

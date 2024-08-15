#include <bits/stdc++.h>
using namespace std;

int righthalf(int rows)
{
    for(int i =0; i<rows; i++)
    {
        for(int j=0; j<i+1; j++)
        {
             cout<<"*";
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

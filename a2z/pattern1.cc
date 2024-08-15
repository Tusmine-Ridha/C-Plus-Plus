#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    int number =1;
    for(int i = 0; i<= n; i++)
    {
        for(int j=0; j<i; j++)
        {
          cout<<number<<" ";
          number++;
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

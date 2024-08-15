#include <bits/stdc++.h>
using namespace std;
#define n 4
int addmatrix(int a[][n],int b[][n])
{
    int C[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
         C[i][j] = a[i][j] + b[i][j];
        }
    }

    cout<<"The result is: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        cout<< C[i][j] <<" " ;
        }
        cout<<endl;
    }
    return 0;

}

int main()
{

    int a[n][n] = {
        {1,2,3,4},
        {5,6,7,9},
        {6,8,2,3},
        {7,5,3,9}

    };
    int b[n][n] = {
        {1,2,3,4},
        {5,6,7,9},
        {6,8,2,3},
        {7,5,3,9}
    };

    addmatrix(a,b);



    return 0;
}

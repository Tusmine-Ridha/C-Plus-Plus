#include <bits/stdc++.h>
using namespace std;
#define n 4
bool matrixequal(int a[][n],int b[][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          if (a[i][j] != b[i][j])
          return false;

        }
    }
 return true;

}

int main()
{

    int a[n][n] = {
        {1,2,3,4},
        {5,6,7,9},
        {6,8,2,9},
        {7,5,3,9}

    };
    int b[n][n] = {
        {1,2,3,4},
        {5,6,7,9},
        {6,8,2,3},
        {7,5,3,9}
    };

   if ( matrixequal(a,b))
   cout<<"both the matrixes are equal" <<endl;

   else
   cout<<"the matrices are not equal"<<endl;



    return 0;
}

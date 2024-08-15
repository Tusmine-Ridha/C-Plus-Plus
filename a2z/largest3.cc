//largest of three numbers using the inbuilt max function
#include <bits/stdc++.h>
using namespace std;

int largest(int x, int y, int z)
{
   int maximum = max(x, max(y,z));
   cout<<"The largest value is: "<<maximum<<endl;
    return 0;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    largest(a,b,c);

    return 0;

}

//largest of three numbers using the values and assigning the value to max
#include <bits/stdc++.h>
using namespace std;

int largest(int x, int y, int z)
{
    int max = x;
    if(max<=y)
    max = y;

    if(max <= z)
    max = z;

    cout<<"max value is: "<< max<<endl;
    return 0;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    largest(a,b,c);

    return 0;

}

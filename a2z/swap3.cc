//swap the value of two variables using a built in function
//time complexity : O(1) & space complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

int swap1(int x, int y)
{
   swap(x,y);

    cout<<"After swapping a: "<<x<<" b: "<<y<<endl;
    return 0;
}

int main()
{
    int a, b;
    cout<<"enter the value of a and b";
    cin>>a>>b;
    cout<<"before swapping a: "<<a<<" b: "<<b<<endl;
    swap1(a,b);

    return 0;
}


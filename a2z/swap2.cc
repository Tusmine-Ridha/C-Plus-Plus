//swap the value of two variables without a temorary variable
//time complexity : O(1) & space complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

int swap(int x, int y)
{

    y = x + y;
    x = y - x;
    y = y-x;

    cout<<"After swapping a: "<<x<<" b: "<<y<<endl;
    return 0;
}

int main()
{
    int a, b;
    cout<<"enter the value of a and b";
    cin>>a>>b;
    cout<<"before swapping a: "<<a<<" b: "<<b<<endl;
    swap(a,b);

    return 0;
}


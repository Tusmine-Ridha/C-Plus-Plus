//Below is a C++ program to find the sum of natural numbers up to n using recursion:
#include <iostream>
using namespace std;

int recurSum(int n)
{
    if(n<=1)
    return n;

    return n + recurSum(n-1);
}

int main()
{

    int n;
    cin>>n;
    cout<<"The sum is: "<<recurSum(n)<<endl;

    return 0;
}

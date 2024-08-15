//Passing a function pointer as a parameter

#include <bits/stdc++.h>
using namespace std;
const int a =10;
const int b = 15;

int add()
{
  return a+b;
}
void print(int(*funcptr)())
{
  cout<<"the sum of two numbers is: "<<funcptr()<<endl;
}
int main()
{
    print(add);
    return 0;
}

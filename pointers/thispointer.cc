//‘this’ pointer in C++
//Following are the situations where ‘this’ pointer is used:

//1) When local variable’s name is same as member’s name
#include <bits/stdc++.h>
using namespace std;


class p{
private:
 int x;
 public:
 void implement(int x)
{
  this->x=x;
}
void print()
{
  cout<<x<<endl;
}
};

int main()
{
    p obj;
   int x=80;
   obj.implement(x);
   obj.print();
   return 0;
}

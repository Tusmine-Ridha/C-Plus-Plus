//References in C++

#include <iostream>
using namespace std;

int main()
{
  int a = 20;
  int& ref = a;
  ref = 30;

  cout<<ref<<endl;
}

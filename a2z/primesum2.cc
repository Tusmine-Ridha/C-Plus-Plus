#include <bits/stdc++.h>
using namespace std;

int primesum2(int n)
{
  if (n <= 1)
  return false;

  for(int i=2; i<=sqrt(n); i++)
  {
    if(n % i == 0)
    return false;


  }
  return true;
}

int main()
{
   int number;
   cin>>number;
   if (primesum2(number) && primesum2(number-2))
   cout<<"Yes"<<endl;

   else
   cout<<"No"<<endl;

    return 0;
}

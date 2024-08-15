#include <bits/stdc++.h>
using namespace std;

int main()
{
    double amount, rate = 3, time = 2, principal = 1000;
    double CI;

    amount = principal * (pow((1 + rate/100),time));
    CI = amount - principal;
    cout<< " the compound interest is: "<< CI<<endl;

}

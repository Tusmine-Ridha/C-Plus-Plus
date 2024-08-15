#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    double principal, rate, time;
    double amount, CI;
    cin>>principal>>rate>>time;
    amount = principal * ((pow((1 + rate/100), time)));
    CI = amount - principal;
    cout<<"the Compound interest is:"<<CI<<endl;
    return 0;


}

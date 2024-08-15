#include <bits/stdc++.h>
using namespace std;

int multiply(int n, int m)
{
    return n*m;
}
int main()
{
    int (*func) (int, int);

    func = multiply;

    cout<<func(3,5)<<endl;

    return 0;
}



// C Program to demonstrate that a void pointer
// can hold the address of any type-castable type

#include <iostream>
using namespace std;

int main()
{
    int a =5;
    char b = 't';

    void* ptr = &a;

    ptr = &b;
    cout<<"pointer value: "<<ptr<<endl;

    return 0;
}

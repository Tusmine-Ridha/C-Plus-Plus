//C++ program to illustrate Pointers

#include <iostream>
using namespace std;

void pointers()
{
    //declare and assign a number
    int a = 5;

    //declare and assign a pointer
    int* ptr = &a;

    //print all the values
    cout<<"value of a: "<<a<<endl;
     cout<<"value of ptr: "<<ptr<<endl;
      cout<<"value of *ptr: "<<*ptr<<endl;
       

}

int main()
{
     pointers();
    //call function to illustrate pointers
    return 0;
}

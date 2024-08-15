// C++ program to illustrate the concepts
// of creating 1D array of pointers
#include <iostream>
using namespace std;


int main()
{
    //allocate array pointer
    int* p = new int[5];
    //insert values into array using for loop
    for(int i=0; i<5; i++)
    {
        p[i] = 2*(i+1);
    }
    //output the values
    cout<<"the array of pointers is: "<<endl;
     for(int i=0; i<5; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
 //display the values using diff methods
 cout<<*p<<endl;
 cout<<*p+1<<endl;
 cout<<*(p+1)<<endl;
 cout<<p[2]<<endl;
 cout<<2[p]<<endl;
*p++;

cout << *p;
    return 0;
}

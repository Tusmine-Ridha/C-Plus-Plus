// C++ Program for changing the
// values of elements while traversing
// using references
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vect{10,20,30,40};

    for(int& x : vect)
    {
        x = x + 5;
    }


    for(int x : vect)
    {
      cout<< x <<" ";
    }

    cout<<endl;
    return 0;

}

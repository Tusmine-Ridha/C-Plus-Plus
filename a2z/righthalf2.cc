// Pyramid Pattern using while loop
#include <iostream>
using namespace std;

int main()
{

    int i = 0, j = 0;

    int rows = 5;

    // while loop check the condition until the given
    // condition is false if it is true then enteres in to
    // the loop
    while (i < rows) {

        // this loop will print the pattern
        while (j <= i) {
            cout << "* ";
            j++;
        }
        j = 0;
        i++;
        cout << "\n";
    }
    return 0;
}

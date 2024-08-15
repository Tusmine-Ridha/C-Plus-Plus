// C++ program to illustrate the concepts
// of creating 2-D array of pointers
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	int N = 3;

	// Creating the array of pointers
	// of size N
	int** p = new int*[N];
	int x = 1;

	// For multiplying
	for (int i = 0; i < N; i++) {

		p[i] = new int[N];

		// Creating N sized int memory
		// block
		for (int j = 0; j < N; j++, x++) {

			p[i][j] = 10 * x;

			// The above statement can
			// also be written as:
			// *(*(p+i)+j) = 10 * x
		}
	}

	// Print the values using pointers
	cout << *p << endl;
	cout << **p << endl;
	cout << *p + 1 << endl;
	cout << **p + 1 << endl;
	cout << *(*(p + 1) + 0) << endl;
	cout << p[2][2] << endl;

	return 0;
}




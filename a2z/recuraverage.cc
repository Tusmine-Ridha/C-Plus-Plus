//C++ Program For Average of an Array using recur

#include <iostream>
using namespace std;

double averageRecur(int arr[], int i, int size)
{
     if (i == size-1)
     return arr[i];

     if (i == 0)
     return ((arr[i] + averageRecur(arr, i+1, size))/size);

    return (arr[i] + averageRecur(arr, i+1, size));
}


int main()
{
   int arr[] = {10, 2, 3, 4, 5, 6, 7, 8, 9};
   int size = sizeof(arr)/sizeof(arr[0]);

   cout<<"The average value of the array is: "<< averageRecur(arr, 0, size)<<endl;
}

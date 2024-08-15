//C++ Program For Average of an Array using for loop

#include <iostream>
using namespace std;

double averageloop(int arr[], int size)
{
    int sum=0;
    for(int i=0; i<size; i++)

    {
      sum = sum+arr[i];
    }

    return (double)sum/size;
}


int main()
{
   int arr[] = {10, 2, 3, 4, 5, 6, 7, 8, 9};
   int size = sizeof(arr)/sizeof(arr[0]);

   cout<<"The average value of the array is: "<< averageloop(arr, size)<<endl;
}

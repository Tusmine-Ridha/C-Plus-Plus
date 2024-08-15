//C++ Program to Find the Minimum and Maximum Element of an Array

#include <bits/stdc++.h>
using namespace std;

int min(int arr[], int size)
{
  return *min_element(arr, arr+size);
}

int max(int arr[], int size)
{
   return *max_element(arr, arr+size);
}

int main()
{
    int arr[] = {1,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"The maximum value in the array is: "<<max(arr, size)<<endl;
    cout<<"The minimum value in the array is: "<<min(arr, size)<<endl;

    return 0;

}

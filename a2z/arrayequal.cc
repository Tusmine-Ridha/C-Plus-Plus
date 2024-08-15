#include <bits/stdc++.h>
using namespace std;

bool arrayCheckEqual(int arr1[],int arr2[],int n,int m)
{
    if(n!=m)
    return false;

    sort(arr1,arr1+n);
    sort(arr2,arr2+m);

    for(int i=0; i<n; i++)

    {
        if(arr1[i] != arr2[i])
        return false;
    }

    return true;
}

int main()

{
    int arr1[] = {1,2,3};
    int arr2[] = {4,3,2,1};
    int n = sizeof(arr1)/sizeof(int);
    int m = sizeof(arr2)/sizeof(int);

    if (arrayCheckEqual(arr1,arr2,n,m))
    cout<<"Equal"<<endl;

    else
    cout<<"Not Equal"<<endl;



    return 0;

}

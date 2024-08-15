#include<iostream>
using namespace std;

int reverse_num()
{
    int num;
    int rev = 0;
    cout<<"enter a number to be reversed: ";
    cin>>num;

    while( num > 0)
    {
        rev =  rev*10 + num%10;
        num = num/10;

    }
    return rev;
}

int main()
{
    int value = reverse_num();
    cout<<"the reversed number is: "<< value << endl;

    return 0;

}

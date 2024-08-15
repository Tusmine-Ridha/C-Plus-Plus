#include<iostream>
using namespace std;

int main(){
   int year;
   cout<<"enter the year: ";
   cin>>year;

   if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 !=0)))
   {
      cout<<"leap year"<<endl;
   }


   else
   {
         cout<<"not a leap year"<<endl;
   }


   return 0;

}

//Complexity Analysis
//Time Complexity: Since there are only if statements in the program, its time complexity is O(1).
//Auxiliary Space: O(1)


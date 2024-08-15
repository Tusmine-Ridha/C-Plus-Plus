#include <bits/stdc++.h>
using namespace std;

double area, peri;

int rectArea(double length, double breadth)
{
  return length*breadth;
}

int rectPeri(double length, double breadth)
{

    return 2*(length+breadth);

}

int main()

{
    double length, breadth;

    cin>>length>>breadth;

    cout<<"The area of a rectangle is: "<<rectArea(length,breadth)<<endl;
    cout<<"The perimeter of a rectangle is: "<<rectPeri(length,breadth)<<endl;



    return 0;
}



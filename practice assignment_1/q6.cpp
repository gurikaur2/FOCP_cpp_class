//WAP that calculates area and perimeter of a rectangle using user provided length and breadth. Use constants where necessary.

#include <iostream>

using namespace std;

int main ()
{
    float l,b,area,peri;
    cout<<"Enter length and breadth: ";
    cin>>l>>b;
    area=l*b;
    peri=2*(l+b);
    cout<<"Area of rectangle= "<<area<<endl;
    cout<<"Perimeter of rectangle= "<<peri<<endl;


    return 0;
}
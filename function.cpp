#include <iostream>

using namespace std;

int area(int);//for square
int area(int,int);//for rectangle 
float area (double, double);//for triangle
float area (double); //for circle
int main ()
{
    cout<<"Area of square="<<area(10)<<endl;
    cout<<"Area of rectangle="<<area(10,20)<<endl;
    cout<<"Area of triangle="<<area(10.8,15.8)<<endl;
    cout<<"Area of circle="<<area(10.8)<<endl;

    return 0;
}

int area(int side)
{
    return side*side;
}

int area(int a, int b)
{
    return (a*b);
}

float area (double b, double h)
{
    return (0.5*b*h);
}

float area (double r)
{
    return (2*3.14*r);
}
//WAP that checks if the triangle is valid based on lengths of its sides and determine its type (equilateral, isosceles or scalene) using nested if-else statements
 
#include <iostream>

using namespace std;

int main ()
{
    int l1,l2,l3;
    cout<<"Enter the three lengths:";
    cin>>l1>>l2>>l3;
    if (l1+l2>l3 || l2+l3>l1 || l3+l1>l2)
    {
        cout<<"The triangle is valid."<<endl;
        if (l1==l2 || l2==l3 || l3==l1)
        {
            cout<<"It is an isosceles triangle."<<endl;
        }
        else if (l1!=l2!=l3)
        {
           cout<<"It is a scalene triangle."<<endl;
        }
        else if (l1==l2==l3)
        {
            cout<<"It is an equilateral triangle."<<endl;
        }
        
    }
    else
    {
        cout<<"Invalid Triangle";
    }
    

    return 0;
}
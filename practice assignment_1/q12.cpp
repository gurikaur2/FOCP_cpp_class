//WAP that solves the quadratic equation ax2+bx+c=0 using conditional statements to handle all possible cases (real and distinct, real and equal, imaginary)

#include <iostream>
#include <math.h>


using namespace std;

int main ()
{
    int a,b,c,d,r1,r2;
    cout<<"Enter quotients a,b and c of the quadratic equation:";
    cin>>a>>b>>c;
    d=(b*b)-(4*a*c);
    r1= (-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);

    if (d>0)
    {
        cout<<"Roots are real and distinct.";
    }
    else if (d<0)
    {
        cout<<"Roots are imaginary.";
    }
    else if (d=0)
    {
        cout<<"Roots are real and equal.";
    }
    
    
    


    
    return 0;
}
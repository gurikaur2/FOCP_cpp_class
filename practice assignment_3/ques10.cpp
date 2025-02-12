/* Overload a function multiply()
i. One version takes int values and returns their product
ii. Another takes one int and one double
iii. Another takes three float values */

#include <iostream>

using namespace std;

int multiply (int,int);
float multiply(int,double);
float multiply (float,float,float);

int main()
{
    cout<<"Product of two integers="<<multiply(10,12)<<endl;
    cout<<"Product of one int and one double="<<multiply(13,3.3)<<endl;
    cout<<"Product of three floats="<<multiply(13,2,5)<<endl;



    return 0;
}

int multiply(int a, int b)
{
    return a*b;
}
float multiply(int a, double c)
{
    return a*c;
}
float multiply (float p, float q, float r)
{
    return p*q*r;
}
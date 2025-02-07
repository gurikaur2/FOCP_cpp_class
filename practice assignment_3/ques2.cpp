#include <iostream>

using namespace std;

int factorial(int n)
{
    int i,fac=1;
    for (i = n; i>=1; i--)
    {
        fac=fac*i;
    }
    return fac;
}

int main ()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Factorial of "<<a<<" is="<< factorial(a)<<endl;
    return 0;
}


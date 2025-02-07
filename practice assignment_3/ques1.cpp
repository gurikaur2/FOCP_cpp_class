#include <iostream>

using namespace std;

int maxNumber(int a,int b)
{
    if (a>b)
    {
        return 1;
    }
    else if (b>a)
    {
        return 2;
    }
    else if (a==b)
    {
        return 0;
    }
    
    
}


int main ()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if (maxNumber(a,b)==1)
    {
        cout<<a<<" is larger.";
    }
    else if (maxNumber(a,b)==2)
    {
        cout<<b <<" is larger.";
    }
    else if (maxNumber(a,b)==0)
    {
        cout<<"Both are equal";
    }
    else
    {
        cout<<"Invalid input.";
    }
    
    
    return 0;
}
//WAP that takes two integers as inputs and determine if the first is a multiple of the second using relational and logical operators.

#include <iostream>

using namespace std;

int main ()
{
    int i,j;
    cout<<"Enter two integers: ";
    cin>>i>>j;
    if (i%j==0 || j%i==0 )
    {
       cout<<"The numbers are multiple of each other."<<endl;
    
    }
    
    return 0;
}
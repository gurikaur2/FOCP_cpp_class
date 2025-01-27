//Take two floating point numbers as input and display their division result with two decimal places.

#include <iostream>
#include<iomanip>

using namespace std;

int main ()
{
    float i,j,div;
    cout<<"Enter two numbers: ";
    cin>>i>>j;
    div=i/j;
    cout<<"Division result= "<<fixed<<setprecision(2)<<div<<endl;

    return 0;
}
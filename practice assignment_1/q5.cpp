//WAP that calculates the compound interest for a given principle amount, rate of interest, and time period using constants and user inputs for variables

#include <iostream>
#include<math.h>

using namespace std;

int main ()
{
    int p,r,t,n,final;
    cout<<"Enter principle amount: ";
    cin>>p;
    cout<<"Enter the rate of interest: ";
    cin>>r;
    cout<<"Enter the time period in years: ";
    cin>>t;
    cout<<"Enter the no. of times interest is compounded per year: ";
    cin>>n;
    final=p*pow((1+(r/n)),(n*t));
    cout<<"Compount interest will be= "<<final<<endl;





    return 0;
}
#include <iostream>

using namespace std;

int sumofDigits(int n)
{
    int i,rem=0,sum=0;
    for(i = n; i!=0; i/=10)
    {
        rem=i%10;
        sum+=rem;
    }
    return sum;
}
int main ()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"The sum of the digits of "<<a<<" will be="<<sumofDigits(a)<<endl;
    return 0;
}
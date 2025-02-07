#include <iostream>

using namespace std;

int revNumber(int n)
{
    int i,rev=0;
    for (i = n; i!=0; i=i/10)
    {
        rev = (rev*10)+(i%10);

    }
   return rev; 
}

int main ()
{
    int a;
    cout<<"Enter a number=";
    cin>>a;
    cout <<"Reverse of "<<a<<" will be "<<revNumber(a)<<endl;
    return 0;
}
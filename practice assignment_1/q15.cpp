// WAP to evaluate (a^b+c&d)

#include <iostream>

using namespace std;

int main ()
{
    int a,b,c,d;
    cout<<"Enter a,b,c,d:";
    cin>>a>>b>>c>>d;
    cout<<(a^b+c&d)<<endl;
    return 0;
}
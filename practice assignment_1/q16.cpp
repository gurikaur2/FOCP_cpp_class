//WAP that determines whether two integers are opposites of each other in sign using bitwise XOR

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 2 numbers:";
    cin>>a>>b;
    if((a^b)<0)
    {
        cout<<"Numbers are of different signs."<<endl;
    }
    else if((a^b)>=0)
    cout<<"Numbers are of same signs."<<endl;
    return 0;
}
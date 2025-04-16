#include <iostream>

using namespace std;

class A
{
    int v1;
    protected:
    int v2;
    public:
    A():v1(0),v2(0)
    {
        cout<<"A default constructor called."<<endl;
    }
    A(int v1, int v2):v1(v1),v2(v2)//works same as "this->"
    {
        cout<<"A parameterised constructor called."<<endl;
    }
    void displayA()
    {
        cout<<v1<<"\t"<<v2;
    }
    ~A()
    {
        cout<<"\n A destroyed.";
    }

};

int main ()
{
    A a1;//default constructor
    A a2(5,10);//parameterised
    //cout<<a1.v1;//v1 is pvt
   // cout<<a1.v2;//v2 is protected
    a1.displayA();//garbage
    cout<<"\n";
    a2.displayA();//5,10

    return 0;
}
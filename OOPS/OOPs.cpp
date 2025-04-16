#include <iostream>

using namespace std;

class Car
{
    string model;
    string colour;
    string regno;
    public:
    void input()
    {
        cout<<endl<<"Enter Model:";
        cin>>model;
        cout<<"Enter colour: ";
        cin>>colour;
        cout<<"Enter Reg no:";
        cin>>regno;
    }

    void display()
    {
        cout<<endl<<"The details are \n Reg no:"<<regno;
        cout<<"\n model:"<<model;
        cout<<"\n Colour:"<<colour<<endl;
    }
}; //end of class

int main ()
{
    Car c1;
    c1.input();
    c1.display();

    Car c2;
    c2.input();
    c2.display();
    return 0;
}
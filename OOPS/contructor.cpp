#include <iostream>

using namespace std;

class Student
{
    int rno;
    string name;
    float marks;
    public:
    Student(int r,string n, float f);
    Student(){rno=0;name="";marks=0.0;}
    void display()
    {
        cout<<"\n Roll no:"<<rno;
        cout<<"\n Name:"<<name;
        cout<<"\n Marks:"<<marks;
    }
};

Student::Student(int r, string n, float m)
{
    rno=r;
    name=n;
    marks=m;
}


int main ()
{
    Student s1(456,"xyz",35);
    Student s2;
    s1.display();
    s2.display();
    return 0;
}
//WAP that takes the user's full name and age as input and displays a greeting with the name and the number of days they have lived

#include <iostream>
#include<string>

using namespace std;

int main ()
{
    
    string name;
    int age;

    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"Enter your age in years: ";
    cin>> age;
    cout<<"Hello "<<name<<" ! You have lived "<<age*365<<" days.";

    return 0;
}
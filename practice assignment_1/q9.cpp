//WAP that takes three inputs : a character, an integer, and a floating point number. Display them in a formatted table

#include <iostream>
#include<iomanip>

using namespace std;

int main ()
{
    int i;
    float f;
    char c;

    cout<<"Enter a character: ";
    cin>>c;
    cout<<"Enter an integer: ";
    cin>>i;
    cout<<"Enter a floating point number: ";
    cin>>f;
    cout<<"\n";
    
    // Displaying the inputs in a formatted table
    cout << right << setw(10) << "Character";
    cout <<setfill('|') << setw(1) << "" << setfill(' ');
cout<< setw(8) << "Integer";
cout <<setfill('|') << setw(1) << "" << setfill(' ');
    cout<< setw(20) << "Floating-point" << endl;


    // Table rows
   cout << right << setw(5) << c
              << setw(8) << i
              << setw(15) << f <<endl;

    cout <<setfill('-') << setw(40) << "" << setfill(' ')<<endl;
    return 0;
}
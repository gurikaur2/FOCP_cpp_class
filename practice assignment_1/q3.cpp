//Ask the user to input two numbers and a mathematical opertor (+,-,*,/) and display the result of the operation.

#include <iostream>

using namespace std;

int main ()
{
    int i,j,choice;
    cout<<"Enter two numbers:";
    cin>>i>>j;

    cout<<"Choose a mathematical operator:\n1. Add\n2. Subtract\n3. Multiply\n4.Divide\n";
    cin>>choice;
    switch (choice)
    {
    case 1:
    cout<<"Sum= "<<i+j<<endl;
    break;
    case 2:
    cout<<"Difference= "<<i-j<<endl;
    break;
    case 3:
    cout<<"Product= "<<i*j<<endl;
    break;
    case 4:
    cout<<"Quotient= "<<i/j<<endl;
    break;
        
    
    default:
    cout<<"Invalid choice!"<<endl;
        break;
    }
    
    return 0;
}
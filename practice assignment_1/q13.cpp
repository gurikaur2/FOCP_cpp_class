//WAP to stimulate an ATM machine using a switch statement. Include options for withdrawal, deposit, balance inquiry, and exit with error handling for invalid input and insufficient balance.

#include <iostream>

using namespace std;

int main ()
{
    int i,choice,amount, balance=100000;
    cout<<"Enter a choice:\n 1. Withdraw amount\n 2. Deposit amount\n 3. Balance Inquiry\n 4. Exit\n";
    cin>>choice;
    switch (choice)
    {
    case 1:
    cout<<"Enter amount to be withdrawn:";
    cin>>amount;
    break;
    case 2:
    cout<<"Enter amount to be deposited:";
    cin>>amount;
    if (amount>balance)
    {
        cout<<"Insufficient balance!";
    }
    break;
    case 3:
    cout<<"Balance ="<<balance;
    break;
    case 4:
    cout<<"EXIT";
    break;
    default:
    cout<<"Invalid choice!";
    break;
    }


    return 0;
}
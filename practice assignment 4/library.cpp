/* A library needs a software system to keep track of books and users. The system should
allow:
• Adding new books to the library
• Issuing books to users 
• Returning books
• Displaying book details */

#include <iostream>

using namespace std;

class book
{
    string title;
    string author;
    string isbn;
    bool isIssued;
    void add()
    {
        cout<<"Enter book name: ";
        cin>>title;
        cout<< "\n Enter the author of the book: ";
        cin>> author;
        cout<<"\n Enter ISBN: ";
        cin>>isbn;
    }
    void issue(int ibn)
    {
        cout<<"Enter book name: ";
        cin>>title;
        cout<< "\n Enter the author of the book: ";
        cin>> author;
        cout<<"\n Enter ISBN: ";
        cin>>isbn;
        cout<<"Book issued successfully!";
    }
    void return()
    {
        cout<<"Enter book name: ";
        cin>>title;
        cout<< "\n Enter the author of the book: ";
        cin>> author;
        cout<<"\n Enter ISBN: ";
        cin>>isbn;
        cout<<"Book has been returned successfully!";
    }
}

class user
{
    string name;
    int userid;
    
}

int main ()
{
book b1;

    
    return 0;
}
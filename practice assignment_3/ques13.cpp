/* Overload a function concat()
i. One version takes two strings and returns their concatenation
ii. Another takes an int and a string, converting the int to a string before concatenation. */

#include <iostream>

using namespace std;

string concat(string,string);
string concat(string,int);

int main ()
{
    cout<<"Concatenation: "<<concat("Gurnoor","Kaur")<<endl;
    cout<<"Concatenation of int and string: "<<concat("Guri ",1)<<endl;
    
    return 0;
}

string concat(string a,string b)
{
    return a+b;
}

string concat (string a, int p)
{
    string c=to_string(p);
    return a+c;
}
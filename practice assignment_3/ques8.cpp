/* Create an overloaded print () function:
a. One takes a string as an argument 
b. Another takes an integer
c. The third takes both a string and an integer */

#include <iostream>

using namespace std;
void print(string);
void print(int);
void print (string, int);

int main ()
{
    print("Guri");
    print(3);
    print("Hi you're number ",1);
    

    return 0;
}

void print(string a)
{
    cout<<a<<endl;
}
void print(int p)
{
    cout<<p<<endl;
}
void print(string a, int p)
{
    cout<<a<<" "<<p<<endl;
}
#include <iostream>

using namespace std;
void hellomsg(string fname="Guest",string lname="");

int main ()
{
    
    hellomsg();
    hellomsg("Gurnoor");
    hellomsg("Gurnoor","Kaur");
    
    return 0;
}

void hellomsg(string fname,string lname)
{
cout<<"Hello "<<fname<<" "<<lname <<endl;
  
}
#include <iostream>

using namespace std;

class AbstractClass
{
    public:
    //Pure virtual function
    virtual void pureVirtualFunction()=0;//can be over-ridden
    //Regular virtual function with implementation
    virtual void regularVirtualFunction();
};

int main ()
{
    
    return 0;
}
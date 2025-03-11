#include <iostream>
#include<vector>

using namespace std;

int main ()
{
    vector<int>v;
    cout<<endl<<v.size()<<" "<<v.capacity();
    for (int i = 0; i < 9; i++)
    {
        v.push_back(i*10);
        cout<<endl<<i<<" size: "<<v.size()<<" capacity: "<<v.capacity();
    }
    v.shrink_to_fit();
    cout<<endl<<"size after shrink to fit:"<<v.size()<<endl<<"capacity after shrink to fit: "<<v.capacity()<<endl;
    
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string str;
    cout<<"Enter a string:";
    getline(cin,str);

    int n = str.size();
    bool repeats=false;
    int count=1;

    for (int i = 0; i < n; i++) { 
        for (int len = 1; len <= n - i; len++) { 
            if (str.substr(i,len) && !repeats)
            {
                count++;
            }
            
        }
    }
    cout<<"Length of longest subsring:"<<count<<endl;
    
    
    return 0;
}
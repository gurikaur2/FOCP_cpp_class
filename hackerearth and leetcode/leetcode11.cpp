#include <iostream>
using namespace std;
int main(){
    
    //FIRST PART
    int n,i,m,x,z;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    
    for(i=0;i<n;i++){
        cout<<"Enter array element "<<i<<":";
        cin>>arr[i];
    }
    int max=arr[0];
    int secmax=arr[0];
   
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max){
            secmax=max;
            max=arr[i];
        }
        else if(arr[i]>secmax && arr[i]<max){
            secmax=arr[i];
        }
    }
    cout<<"Max:"<<max<<endl;
    cout<<"Second Max:"<<secmax<<endl;


   //SECOND PART
    for ( m = 0; m < n; m++)
    {
        if (max==arr[m])
        {
            cout<<"Index of max:"<<m<<endl;
            break;
        }
        
    }
    for (x = 0; x < n; x++)
    {
        if (secmax==arr[x])
        {
            cout<<"Index of secmax:"<<x<<endl;
            break;
        }
        
    }
    z=abs(m-x);
    cout<<"Diff in index:"<<z<<endl;
    cout<<"Area of container:"<<z*secmax<<endl;
    return 0;

}
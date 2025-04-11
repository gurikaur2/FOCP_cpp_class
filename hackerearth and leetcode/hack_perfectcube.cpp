#include <iostream>
#include<cmath>
using namespace std;


bool cube(int n){
	int cube;
	for(int i=1;i<n;i++)
	{
		cube=i*i*i;
		if(cube==n)
		{
			return true;
		}
		if(cube>n)
		{
			return false;
		}
	}
}

int main() {
    /* int N;
    cout << "Enter the size of the array: ";
    cin >> N;

    // Dynamically allocate an array of size N
    int* arr = new int[N];

    for (int i = 0; i < N; i++) {
        cout << "Enter array element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    //delete[] arr;

	int count =0;
	for(int a=0;a<N;a++){
		int product=1;
		for(int b=b+1;b<N;b++){
			product*=arr[a]*arr[b];
			double cuberoot=cbrt(N);
			if(cuberoot==round(cuberoot)){
				count++;
			}
		}
	}
	cout<<count;

    return 0; */

	int n;
	cin >> n;    //Reading input from STDIN
	int	arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int count =0;
	for(int i=0;i<n;i++){
		int product=1;
		for(int j=i+1;j<n;j++){
			product*=arr[i]*arr[j];
			if(cube(product)){
				count++;
			}
		}
	}
	cout<<count;
}

#include<iostream>
using namespace std;

int main()
{
	int i;
	
	cout<<"Enter array size:";
	cin>>i;
	
	int arr[i];
	
	cout<<"Enter the elements of array:"<<endl;
	for(int j=0;j<i;j++){
		cin>>arr[j];
	}
	
	cout<<"Even number in array are: ";
	for(int j=0;j<i;j++){
		if(arr[j] % 2 == 0 ){
			cout<<arr[j]<<" ";
		}
	}
	cout<<endl;
}
/*
output:
Enter array size:5
Enter the elements of array:
12
42
15
55
26
Even number in array are: 12 42 26
*/
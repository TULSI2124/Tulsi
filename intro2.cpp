#include <iostream>
using namespace std;

int main()
{
	int a,b,i;
	cout<<"Enter the first number:";
	cin>>a;
	cout<<"Enter the second number:";
	cin>>b;

	cout<<endl;
	cout<<"Leap year:";
	for(int i=a;i<=b;i++){
		if(i%4==0){
			cout<<i<<" ";
		}
	}
}
/*output:
Enter the first number:2020
Enter the second number:2040

Leap year:2020 2024 2028 2032 2036 2040
*/
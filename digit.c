#include<stdio.h>
int main()
{
	int n,count=0;
	
	printf("Enter n:");
	scanf("%d",&n);
	if(n==0)
	{
		count=1;
	}else{
		for(;n!=0;n/=10){
			count++;
		}
	}
	printf("Number of digits:%d\n",count);
}
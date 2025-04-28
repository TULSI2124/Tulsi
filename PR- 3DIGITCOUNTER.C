#include<stdio.h>
int main()
{
	int num, sum=0, rem;
	
	printf("Enter number:");
	scanf("&d",num);
	
	while(num>0)
	{
		rem=num%10;
		printf("rem:%d",rem);
		num=num/10;
		sum++;
	}
	
	pritf("\n Total no of digit:%d",num);
}
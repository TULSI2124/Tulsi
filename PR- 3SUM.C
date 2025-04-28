#include<stdio.h>
int main()
{
	int num, first, last, sum;
	
	printf("Enter num");
	scanf("%d",&num);
	
	last = num % 10;
	
	while(num>=10){
		num/+10;
	}
	
	first=num;
	
	sum=first+last;
	
	printf("first:%d\n",first);
	printf("last:%d\n",last);
	printf("sum of first and last is:%d",sum);	
	
}
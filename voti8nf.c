#include<stdio.h>
#define a 18
int main()
{
	int b;
	
	printf("value of b :");
	scanf("%d",&b);
	
	if(a<b)
	{
		printf("b is eligible for voting");
	}
	else{
		printf("a is not eligible for voting");
	}
}
#include<stdio.h>
int main()
{
	float celsius, fahranheit;
	
	printf("Enter the value of celsius:");
	scanf("%f",&celsius);
	
	fahranheit=(1.8*celsius) +32;
	
	printf("%f",fahranheit);
	
}
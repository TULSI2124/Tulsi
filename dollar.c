#include<stdio.h>
int main()
{
	float dollar;
	printf("Enter a dollar:");
	scanf("%f",&dollar);
	
	float rupees = dollar*70;
	
	printf("%f rupees",rupees);
}
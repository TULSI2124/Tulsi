#include<stdio.h>
int main()
{
	float income,tax=0;
	
	printf("Enter your income:");
	scanf("%f",&income);
	
	if(income<=2500)
	{
		tax=0;
	}
	else if(income<=5000)
	{
		tax=(income-2500)*0.10;
	}
	else if(income<=10000)
	{
		tax=2500*0.10+(income-5000)*0.20;
	}
	else
	{
		tax=2500*0.10+5000*0.20+(income-10000)*0.30;
	}
	
	printf("Tax amount:%.2f\n",tax);
}
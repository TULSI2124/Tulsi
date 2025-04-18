#include<stdio.h>
int main()
{
	int salary,HRA,DA,TA,totalsalary;
	
	printf("value of salary:");
	scanf("%d",&salary);
	
	HRA=(salary*10)/100;
	DA=(salary*5)/100;
	TA=(salary*8)/100;
	
	totalsalary=salary+HRA+DA+TA;
	printf("Total salary is:%d",totalsalary);
	
}
#include<stdio.h>
int main()
{
	int i,j,k,l;
	for(i=1;i<=5;i++)
	{
		for(l=1;j<=5-i;l++)
		{
			printf("  ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		for(k=2;k<=i;k++)
		{
			printf("%d",k);
		}
	printf("\n");
	}
}
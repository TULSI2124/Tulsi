#include<stdio.h>
int main()
{
	int i, j,number=11;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d",number);
			number++;
		}
		printf("\n");
	}
}/*ouput:
 11
 12 13
 14 15 16
 17 18 19 20
*/
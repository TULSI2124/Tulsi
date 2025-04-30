#include<stdio.h>
int main()
{
		int i, j,number=11;
	for(i=41;i<=45;i++)
	{
		for(j=41;j<=i;j++)
		{
			printf(" %d",j);
			
		}
		printf("\n");
	}
}
/*output:
 41
 41 42
 41 42 43
 41 42 43 44
 41 42 43 44 45    
*/
#include<stdio.h>
int main()
{
	int i, arr[5];
	
	for(i=0;i<5;i++)
	{
		printf("[%d]:",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<5;i++)
	{
		if(arr[i]<0){
			printf(" Negative numbers: %d",arr[i]);
		}
	}
	printf("\n");
	
}
/*output:
[0]:6
[1]:9
[2]:-6
[3]:-3
[4]:2
 Negative numbers: -6 Negative numbers: -3
*/
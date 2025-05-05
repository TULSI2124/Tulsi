#include<stdio.h>
int main()
{
	int i,j,arr[3][3];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	int largest= arr[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]>largest){
				largest=arr[i][j];
			}
		}
	}
	
	printf("The largest element in the array is:%d\n",largest);
}
/*output:
[0][0]:1
[0][1]:2
[0][2]:3
[1][0]:4
[1][1]:5
[1][2]:6
[2][0]:7
[2][1]:8
[2][2]:9
The largest element in the array is:9
*/
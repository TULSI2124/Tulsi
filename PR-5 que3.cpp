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
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",arr[j][i]);
		}
		
		printf("\n");
	}
	
}
/*
output:
[0][0]:2
[0][1]:4
[0][2]:1
[1][0]:3
[1][1]:5
[1][2]:4
[2][0]:8
[2][1]:2
[2][2]:6
241
354
826

238
452
146
*/
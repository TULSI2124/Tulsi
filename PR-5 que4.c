#include<stdio.h>
int main()
{
	int i,j, arr[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<3;i++){
		int rowsum = 0;
		for(int j=0;j<3;j++){
			rowsum = rowsum + arr[i][j];
			printf("\n Sum of row %d: %d\n",i,rowsum);
		}
	}
	for(int i=0;i<3;i++){
		int colsum = 0;
		for(int j=0;j<3;j++){
			colsum = colsum + arr[i][j];
		}
		printf("\n Sum of col %d: %d\n",j, colsum);
	}
}
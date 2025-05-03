#include<stdio.h>
int main()
{
	int arr[3][3];
	float sum=0,avg;
	
	for(int i=0;i<3;i++){
		for(int j=0; j<3; j++){
			printf("Enter arr[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
			sum+= arr[i][j];
			}
		}
			avg=sum/9;
			printf("The avg of given number:%.2f",avg);
	}

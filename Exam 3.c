#include<stdio.h>
int main()
{
	int arr[100];
	for(int i=0;i<10;i++){
		if(i % 2 != 0){
			printf("%d",i);
		}else{
			printf("  ");
		}
	}
}
/*
output:
  1  3  5  7  9
*/
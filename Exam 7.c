#include<stdio.h>
int main()
{
	int i, j, rows = 5;
	int num = 10;
	
	for(i = 0;i < rows;i++){
		for(j=0;j<rows-i-1;j++){
			printf("  ");
		}
		for(j=0;j<i+1;j++){
			printf("%d ", num+j);
		}
		num--;
		printf("\n");
	}
	return 0;
}/*
ouput:
        10
      9 10
    8 9 10
  7 8 9 10
6 7 8 9 10
*/
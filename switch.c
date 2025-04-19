#include<stdio.h>
int main()
{
	int choice;
	printf("press 1 English\n");
	printf("press 2 Hindi\n");
	printf("press 3 Gujarati\n");
	printf("press 4 Japenese\n");
	printf("Enter your choice:\n");
	scanf("%d",&choice);
	
	
	switch(choice)
	{
		case 1:
			printf("English");
			break;
		case 2:
			printf("Hindi");
			break;
		case 3:
			printf("Gujarati");
			break;
		case 4:
			printf("Japenese");
			break;
		default:
			printf("Wrong choice!!!!");
			break;
	}
}
/*
output:
	Enter your choice:4
	Japenese
	Enter your choice:6
	Wrong choice
*/

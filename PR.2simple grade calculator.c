#include<stdio.h>
int main()
{
	int score;
	char grade;
	
	printf("Enter your score:");
	scanf("%d",&score);
	
	 grade=(score>=90)?'A':
				(score>=75&&score<=90)?'B':
				(score>=60&&score<=75)?'C':
				(score>=35&&score<=60)?'D':
				(score<=35)?'F':
	printf("Your grade is:%c\n",grade);
	
	printf("Comment:");
	switch(grade){
		case'A':
			printf("Excellent work!!\n");
			break;
		case'B':
			printf("Well done.\n");
			break;
		case'C':
			printf("Good job.\n");
			break;
		case'D':
			printf("You passed, but you can do better.\n");
			break;
		case'F':
			printf("Sorry, you failed.\n");
			break;
		default:
			printf("Invalid grade.\n");
	}
	if(score>=35&&score<=100){
		printf("Congratulations! You are eligibile for the next level.\n");
	}else{
		printf("Please try again next time.\n");
	}
}
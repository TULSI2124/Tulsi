#include<stdio.h>
int main()
{
	int maths, sci, phy, bio, chem;
	float total, avg;
	char grade;
	
	printf("Enter maths marks:");
	scanf("%d",&maths);
	printf("Enter sci marks:");
	scanf("%d",&sci);
	printf("Enter phy marks:");
	scanf("%d",&phy);
	printf("Enter bio marks:");
	scanf("%d",&bio);
	printf("Enter chem marks:");
	scanf("%d",&chem);
	
	total = maths+sci+phy+bio+chem;
	avg = total/5.0;
	
	if(avg >= 90 && avg <= 100){
		grade = 'A';
	}else if(avg >= 80 && avg <= 90){
		grade = 'B';
	}else if(avg >= 70 && avg <= 80){
		grade = 'C';
	}else if(avg >= 60 && avg <= 70){
		grade = 'D';
	}else{
		grade = 'F';
	}
	
	printf("Avg marks: %.2f\n",avg);
	printf("grade: %c\n",grade);
	
	return 0;
}/*
output:Enter maths marks:58
Enter sci marks:65
Enter phy marks:21
Enter bio marks:35
Enter chem marks:54
Avg marks: 46.60
grade: F
*/
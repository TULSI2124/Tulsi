#include<stdio.h>
int main()
{
	int bio,phy,chem,total;
	float per;
	
	printf("value of bio:");
	scanf("%d",&bio);
	
	printf("value of phy:");
	scanf("%d",&phy);
	
	printf("value of chem:");
	scanf("%d",&chem);
	
	total=phy+chem+bio;
	printf("%d",total);
	
	per=(float)(total*100)/300;
	printf("%d",per);
}
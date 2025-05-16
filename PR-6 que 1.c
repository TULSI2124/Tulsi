#include<stdio.h>
int main()
{
	char str[100];
	int i=0,j=0;
	int flag=1;
	
	printf("Entera string:");
	scanf("%s",str);
	
	while(str[j] != '\0'){
		j++;
	}
	j--;
	
	while(i<j){
		if(str[i] != str[j]){
			flag=0;
			break;
		}
		i++;
		j--;
	}
	if(flag == 1){
		printf("The string is palindrome\n");
	}else{
		printf("The string is not palindrome\n");
	}
}
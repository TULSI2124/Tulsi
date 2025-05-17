#include<stdio.h>
int main()
{
	char str[100]= {'h','e','l','l','o',' ','w','o','r','l','d'};
	char *ptr = str;
	
	int length = 0;
	while(*ptr !='\0') {
		length++;
		ptr++;
	}
	
	printf("Length of string '%s': %d\n",str, length);
	
	return 0;
}
/*output:
Length of string 'hello world': 11
*/
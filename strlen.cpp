#include<stdio.h>
int main()
{
	char ch[1000];
	int i=0;
	printf("enter string:");
	scanf("%s",&ch);
	while(ch[i]!=0){
		i++;
	}
	printf("length of string is %d",i);
	return 0;
}

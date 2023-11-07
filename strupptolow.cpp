#include<stdio.h>
int main()
{
	char ch[1000];
	int j,i=0;
	printf("enter string:");
	scanf("%s",&ch);
	while(ch[i]!=0){
		i++;
	}
	for(j=0;j<i;j++){
		ch[j]=ch[j]+32;
	}
	for(j=0;j<i;j++){
		printf("%c",ch[j]);
	}
	
	
	return 0;
}

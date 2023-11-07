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
	char newch[i+1];
	for(j=0;j<i+1;j++){
		newch[j]=ch[j];
		printf("%c",newch[j]);
	}
	return 0;
}

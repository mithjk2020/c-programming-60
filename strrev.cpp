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
	for(j=0;j<(i+1)/2;j++){
		char temp=ch[j];
		ch[j]=ch[i-j-1];
		ch[i-j-1]=temp;
	}
	for(j=0;j<i;j++){
		printf("%c",ch[j]);
	}
	return 0;
}

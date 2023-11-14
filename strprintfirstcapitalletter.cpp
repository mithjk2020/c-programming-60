#include<stdio.h>
int main()
{
	char ch[1000];
	int i=0,j,k;
	printf("enter the string:");
	scanf("%[^\n]s",ch);
	while(ch[i]!=0){
		i++;
	}
	for(j=0;j<i;j++){
		if(ch[j]>=65&&ch[j]<=90){
			printf("%c",ch[j]);
			break;
		}
	}
	return 0;
}

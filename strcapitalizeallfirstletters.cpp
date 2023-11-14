#include<stdio.h>
int main()
{
	char ch[1000];
	int i=0,j,k=0;
	printf("enter the string:");
	scanf("%[^\n]s",ch);
	while(ch[i]!='\0'){
		i++;
	}
	ch[0]=ch[0]-32;
	for(j=0;j<i;j++){
		if(ch[j]==' '){
			ch[j+1]=ch[j+1]-32;
		}
	}
	printf("the new string is %s",ch);
}

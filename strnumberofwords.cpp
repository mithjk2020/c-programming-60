#include<stdio.h>
int main()
{
	char ch[1000];
	int i=0,j,k=0;
	printf("enter the string:");
	scanf("%[^\n]s",ch);
	while(ch[i]!=0){
		i++;
	}
	for(j=0;j<i;j++){
		if(ch[j]==' '){
			k++;
		}
	}
	printf("the number of words is %d",k+1);
}

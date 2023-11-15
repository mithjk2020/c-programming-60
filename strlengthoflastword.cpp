#include<stdio.h>
int main()
{
	char ch[1000];
	int i=0,j,space=0;
	printf("enter the string:");
	scanf("%[^\n]s",ch);
	while(ch[i]!='\0'){
		i++;
	}
	if(i==1){
		printf("-1");
	}
	else{
		for(j=0;j<i;j++){
		if(ch[j]==' '){
			space=j;
		}
	}
	printf("the length of last words is %d.",i-space-1);
	}
	return 0;
}

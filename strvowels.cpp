#include<stdio.h>
int main()
{
	char ch[1000];
	int i,j,k;
	printf("enter string:");
	scanf("%s",ch);
	while(ch[i]!=0){
		i++;
	}
	for(j=0;j<i;j++){
		if(ch[j]=='a'||ch[j]=='e'||ch[j]=='i'||ch[j]=='o'||ch[j]=='u'){
			printf("%c",ch[j]);
		}
	}
	return 0;
}

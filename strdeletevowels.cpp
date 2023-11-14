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
		if(ch[j]=='a'||ch[j]=='e'||ch[j]=='i'||ch[j]=='o'||ch[j]=='u'){
			for(k=j;k<i;k++){
				ch[k]=ch[k+1];
			}
			i--;
		}
	}
	printf("the new string is %s",ch);
}

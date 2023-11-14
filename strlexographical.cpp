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
	for(j=0;j<i-1;j++){
		for(k=0;k<i-j-1;k++){
			if(ch[k]>ch[k+1]){
			int temp=ch[k];
			ch[k]=ch[k+1];
			ch[k+1]=temp;
		}
		}
	}
	printf("%s",ch);
}

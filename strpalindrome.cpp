#include<stdio.h>
int main()
{
	char ch[1000];
	int k,j,i=0,count=0;
	printf("enter string:");
	scanf("%s",&ch);	
	while(ch[i]!=0){
		i++;
	}
	char origch[i+1];
	for(k=0;k<i;k++){
		origch[k]=ch[k];
	}
	for(j=0;j<(i+1)/2;j++){
		char temp=ch[j];
		ch[j]=ch[i-j-1];
		ch[i-j-1]=temp;
	}
	for(j=0;j<i;j++){
		printf("%c",ch[j]);
	}
	for(j=0;j<i;j++){
	
		if(origch[j]==ch[j]){
		
			count++;
		}
	}
	if(count==i){
		printf("the given string is palindrome");
	}
	else{
		printf("the given string is not a palindrome");
	}
	return 0;
}

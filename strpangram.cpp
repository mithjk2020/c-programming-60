#include<stdio.h>
int main()
{
	char ch[1000];
	int i=0,j,k,m,sum=0,oursum=0;
	printf("enter the string:");
	scanf("%[^\n]s",ch);
	while(ch[i]!=0){
		i++;
	}
	for(j=0;j<i;j++){
		if(ch[j]==' '){
			for(k=j;k<i;k++){
				ch[k]=ch[k+1];
			}
			i--;
		}
	}
	for(m=97;m<123;m++){
		sum+=m;
	}
	oursum=ch[0]+32;
	for(j=1;j<i;j++){
		oursum+=ch[j];
	}
	if(sum==oursum){
		printf("yes pangram");
	}
	else{
		printf("not a pangram");
	}
	return 0;
}


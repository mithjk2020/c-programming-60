#include<stdio.h>
int main()
{
	char s1[1000],s2[1000];
	int k,j=0,i=0,m=0;
	printf("enter string1:");
	scanf("%s",&s1);
	printf("enter string2:");
	scanf("%s",&s2);
	while(s1[i]!=0){
		i++;
	}
	while(s2[j]!=0){
		j++;
	}
	for(k=i;k<i+j;k++){
		s1[k]=s2[m];
		m++;
	}
	for(int p=0;p<i+j;p++){
		printf("%c",s1[p]);
	}
	return 0;
}

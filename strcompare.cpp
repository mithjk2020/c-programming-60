#include<stdio.h>
int main()
{
	char s1[1000],s2[1000];
	int i=0,j=0,k,count=0;
	printf("enter string1:");
	scanf("%s",s1);
	printf("enter string2:");
	scanf("%s",s2);
	while(s1[i]!=0){
		i++;
	}
	while(s2[j]!=0){
		j++;
	}
	if(j==i){
		for(k=0;k<i;k++){
			if(s1[k]==s2[k]){
				count++;
			}
		}
		if(count==i){
			printf("the 2 strings are equal.");
		}
		else{
			printf("the 2 strings are unequal.");
		}
	}
	else{
		printf("the 2 strings are unequal.");
	}
	return 0;
}

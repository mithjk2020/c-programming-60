#include<stdio.h>
int main()
{
	char s1[1000],s2[1000];
 	int i=0,j=0,k,a,m=0,n;
 	printf("enter the first string:");
 	scanf("%s",&s1);
 	printf("enter the second string:");
 	scanf("%s",&s2);
 	while(s1[i]!=0){
 		i++;
	 }
	while(s2[j]!=0){
		j++;
	}
	for(a=0;a<j;a++){
		for(k=0;k<i;k++){
			if(s2[a]==s1[k]){
				for(n=k;n<k+j;n++){
					if(s1[n]==s2[a]){
						a++;
						m++;
					}
				}
			}
		}
	}
	if(m==j){
		printf("str2 can be obtained from str1");
	}
	else{
		printf("str2 cannot be obtained from str1");
	}
}

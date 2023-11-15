#include<stdio.h>
int main()
{
	char s1[1000],s2[100];
	int i=0,j,k,m,n=0;
	char ch;
	printf("enter string s1:");
	scanf("%[^\n]s",s1);
	while(s1[i]!='\0')
	i++;
	for(j=0;j<i;j++){
		if(s1[j]==' '){
				for(m=j;m<i;m++){
					ch=s1[m];
					s1[m]=s1[m+1];
					s1[m+1]=ch;
				}
		}
	}
	printf("the new string is %s",s1);
	return 0;
}

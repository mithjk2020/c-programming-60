#include<stdio.h>
int main()
{
	int n,c=0;
	printf("enter n:");
	scanf("%d",&n);
	while(n!=0){
		n>0;
		n=n/10;
		c++;
	}
	printf("%d",c);
	return 0;
}

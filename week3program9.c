#include<stdio.h>
int main()
{
	int a=0,b=1,s=0,n,i;
	printf("enter n:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		s=a+b;
		a=b;
		b=s;
	}
	printf("%d",s);
	return 0;
}

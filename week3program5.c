#include<stdio.h>
int main()
{
	int n,i,a=0;
	printf("enter the integer n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		a+=i;
	}
	printf("%d",a);
	return 0;
}

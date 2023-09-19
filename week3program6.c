#include<stdio.h>
int main()
{
	int n,i=1,a=1;
	printf("enter the integer n");
	scanf("%d",&n);
	while(i<=n && i>0)
	{
		a*=i;
		i++;
		
	}
	printf("%d",a);
	
}

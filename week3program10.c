#include<stdio.h>
int main()
{
	int n,i,s=0;
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
		i=n%10;
		s=s*10+i;
		n=n/10;
	}
	printf("the reverse of the number is %d",s);
	return 0;
	
}

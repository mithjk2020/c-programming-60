#include<stdio.h>
int main()
{
	int n,i,s=0;
	printf("enter the number");
	scanf("%d",&n);
	
	while(n!=0)
	{
		i=n%10;
		s+=i;;
		n=n/10;
	}
	printf("the sum is %d",s);
	return 0;
	
}

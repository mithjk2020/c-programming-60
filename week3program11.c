#include<stdio.h>
int main()
{
	int n,i,s=0;
	printf("enter the number");
	scanf("%d",&n);
	int p=n;
	while(n!=0)
	{
		i=n%10;
		s=s*10+i;
		n=n/10;
	}
	if(s==p){
		printf("the number is a palindrome");
	}
	else
	printf("the number is not a palindrome");
	return 0;
	
}

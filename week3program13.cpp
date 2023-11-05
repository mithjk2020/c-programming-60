#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,a=0,b=0;
	printf("enter n:");
	scanf("%d",&n);
	while(n!=0){
		b+=(n%2)*pow(10,a);
		n=n/2;
		a++;
	}
	printf("%d",b);
	return 0;
}

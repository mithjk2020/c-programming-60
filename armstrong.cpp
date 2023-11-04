#include<stdio.h>
#include<math.h>
int main()
{
	int j,n,i=0,sum=0;
	printf("enter number n:");
	scanf("%d",&n);
	int m=n;
	int k=n;
	int s=0;
	while(n!=0){
		n=n/10;
		i++;
	}
	for(j=1;j<i+1;j++){
		int u=pow(10,j);
		int p=m%u;
		while(p/10!=0){
			p=p/10;
		}
		sum+=pow(p,i);	
	}
	if(sum==k)
	printf("the number is an armstrong number: ");
	return 0;
}

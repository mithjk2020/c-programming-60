#include<stdio.h>
int main()
{
	int i,n,sum=0,count=0;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n/2;i++){
		sum+=a[i];
	}
	for(i=n/2;i<n;i++){
		count+=a[i];
	}
	if(count==sum){
		printf("no element to be added");
	}
	else if(count>sum){
		printf("add %d to left half",count-sum);
	}
	else
	printf("add %d to the right half",sum-count);
	return 0;
}

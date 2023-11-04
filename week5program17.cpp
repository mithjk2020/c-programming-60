#include<stdio.h>
int main()
{
	int i,j,n,k,count=0;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				count++;
			}
		}
		printf("the count of %d is %d",a[i],count);
		printf("\n");
		count=0;
	}
}

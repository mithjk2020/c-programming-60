#include<stdio.h>
int main()
{
	int n,i,j,avg,sum;
	printf("enter the length of the array:");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements in the array : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<(n+1)/2;i++){
		int temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
	for(avg=0;avg<n;avg++){
		printf("%d",a[avg]);
	}
}

#include<stdio.h>
int main()
{
	int n,i,j,avg,sum;
	printf("enter even length of the array:");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements in the array : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i+=2){
		int temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}

}

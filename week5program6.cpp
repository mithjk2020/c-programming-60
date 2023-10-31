#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("enter the value of k");
	scanf("%d",&k);
	printf("enter the length of the array:");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements in the array : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
		
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	printf("the kth maximum number is %d",a[n-k]);
	printf("\n");
	printf("the kth minimum number is %d",a[k-1]);
	printf("\n");
	return 0;
}

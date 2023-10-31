#include<stdio.h>
int main()
{
	int i=0,count=0,n,k;
	printf("enter the length of the array:");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements in the array : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the number whose occurence you want to find:");
	scanf("%d",&k);
	for(i=0;i<n;i++){
		if(a[i]==k){
			count++;
		}
	}
	printf("the number of times %d occurs is %d",k,count);
}

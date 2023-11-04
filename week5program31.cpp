//Given an array of integers and a number k, write a program that returns true if given array
//can be divided into pairs such that sum of every pair is divisible by k.
//Input :
//n=4
//a={9 7 5 3}
//k=2
//Output: True
#include<stdio.h>
int main()
{
	int i,j,n,k,count=0,sum=0;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter k:");
	scanf("%d",&k);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			count=a[i]+a[j];
			if(count%k==0){
				sum++;
			}
			
		}
		
		count=0;
	}
	int m=n*(n-1);
	if(sum==m/2)
	printf("true");
	return 0;	
}

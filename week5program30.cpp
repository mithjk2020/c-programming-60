//Given two array A[0….N-1] and B[0….M-1] of size N and M respectively,
// representing two numbers such that every element of arrays represent a digit.
// For example, A[] = { 1, 2, 3} and B[] = { 2, 1, 4 } represent 123 and 214 respectively. 
//The task is to find the sum of both the numbers.
#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,m,sum=0,count=0;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter m:");
	scanf("%d",&m);
	int a[n],b[m];
	printf("enter array elements of a:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter array elements of b:");
	for(j=0;j<m;j++){
		scanf("%d",&b[j]);
	}
	for(i=0;i<n;i++){
		sum+=a[i]*pow(10,n-i-1);
	}
	printf("\n%d",sum);
	for(i=0;i<m;i++){
		count+=b[i]*pow(10,m-i-1);
	}
	printf("%d",count+sum);
	return 0;	
}

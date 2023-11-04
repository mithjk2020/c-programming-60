//You are given an integer 'n' which denote the number of elements in an array a[ ]and an integer 'x'.
// You have to calculate the average of element a[i] and x and find out if that number exist in array or not.
// Do it for all the elements of array and store the count result in another array for each index i.
//Examples:
//Input : n=5 x=2 a={2 4 8 6 2}
//Output: 2 0 0 1 2
//Input : n=6 x=3 a={9 5 2 4 0 3}
//Output: 0 1 1 1 0 1
#include<stdio.h>
int main()
{
	int i,j,n,x;
	float sum=0;
	printf("enter n:");
	scanf("%d",&n);
	int a[n],b[n];
	printf("enter array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter x:");
	scanf("%d",&x);
	float avg=0;
	
	for(i=0;i<n;i++){
		avg=(x+a[i])/2;
		for(j=0;j<n;j++){
			if(avg==a[j]){
			sum++;	
			}
		}
		b[i]=sum;
		avg=0;
		sum=0;
	}
	for(i=0;i<n;i++){
		printf("%d ",b[i]);
	}
}



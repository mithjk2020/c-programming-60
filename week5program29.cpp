//For the given sorted array of integers, print the number of distinct absolute values among the elements of the array.
//Example
//Input: n = 5, a = {-1 -1 0 1 2}
//Output: 3
//Input: n = 4, a = {0 0 0 0}
//Output: 1
#include<stdio.h>
int main()
{
	int a[8]={-2,-3,5,3,9,2,3,5};
	int i,j,n,l=0,count=0;
	
	for(i=0;i<8;i++){
		if(a[i]<0){
			a[i]=-a[i];
		}
	}
	for(i=0;i<8;i++){
		printf("%d ",a[i]);
	}
	for(i=0;i<7;i++){
		for(j=i+1;j<8;j++){
			if(a[i]==a[j]){
				a[j]=100;
				count+=1;	
			}
		}
	}
	printf("\n%d",count);
	
}

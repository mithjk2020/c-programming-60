//19. Write a program in C to insert New value in the array (sorted list)
//Example:
//input the value to be inserted : 8
//The exist array list is :
//2 5 7 9 11
//After Insert the list is :
//2 5 7 8 9 11
#include<stdio.h>
int main()
{
	int i,j,k,n,temp;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	printf("enter the element to be inserted:");
	scanf("%d",&k);
	printf("enter array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	n++;
	for(i=0;i<n;i++){
		if(k>a[i]&&k<a[i+1]){
			for(j=n-1;j>=i+1;j--){
				a[j]=a[j-1];
			}
			a[i+1]=k;
		}
	}
	printf("new elements are:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

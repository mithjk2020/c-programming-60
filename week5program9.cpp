#include<stdio.h>
int main()
{
	int n,i,j,avg,sum;
	printf("enter the length of the array:");
	scanf("%d",&n);
	int a[n-1];
	printf("enter the elements in the array : ");
	for(i=0;i<n-1;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<n-1;i++){
		if(a[i+1]-a[i]!=1){
			printf("%d",a[i]+1);
		}
	}
	return 0;
}

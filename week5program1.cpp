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
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
		
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(avg=0;avg<n;avg++){
		printf("%d",a[avg]);
	}
	printf("the maximum number is %d",a[n-1]);
	printf("\n");
	printf("the minimum number is %d",a[0]);
	printf("\n");
	
	printf("the average of all numbers is %d",(a[0]+a[n-1])/2);
	return 0;
}

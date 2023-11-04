#include<stdio.h>
int main()
{
	int i,j,n,m,count=0,sum=0;
	printf("enter m:");
	scanf("%d",&m);
	printf("enter n:");
	scanf("%d",&n);
	int a[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("enter the element at %d,%d:",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			
				int temp=a[i][j];
			    a[i][j]=a[j][i];
			    a[j][i]=temp;
				
			
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("element at %d,%d is %d ",i,j,a[i][j]);
		}
		printf("\n");
	}
}

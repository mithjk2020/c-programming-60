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
			if(i==j&&a[i][j]==1){
				count++;
			}
			if(i!=j&&a[i][j]==0)
			sum++;	
		}
	}
	if(count==m&&sum==(m*n)-m){
		printf("it is an identity matrix");	
	}
	else
	printf("it is not an identity matrix");
}

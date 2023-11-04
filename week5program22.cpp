//Write a program in C to insert New value in the array (sorted list)
//Example:
//input the value to be inserted : 8
//The exist array list is :
//2 5 7 9 11
//After Insert the list is :
//2 5 7 8 9 11
#include<stdio.h>
int main()
{
	int m,n;
	printf("enter m:");
	scanf("%d",&m);
	printf("enter n:");
	scanf("%d",&n);
	int a[m][n],b[m][n],c[m][n];
	int i,j,k,p,q;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("enter element of a and b at %d,%d:",i,j);
			scanf("%d %d",&a[i][j],&b[i][j]);
			c[i][j]=a[i][j]*b[i][j];
			//here in above statement u can change to add,subtract or multiply your choice	
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",c[i][j]);	
		}
		printf("\n");
    }
}


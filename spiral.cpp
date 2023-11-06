#include<stdio.h>
int main()
{
	int i,a,b,c,d,e,n,k=1;
	printf("enter n:");
	scanf("%d",&n);
	int arr[n][n];
	for(i=0;i<(n+1)/2;i++){
		for(a=i;a<n-i;a++){
			arr[i][a]=k;
			k++;
		}
		for(b=i+1;b<n-i;b++){
			arr[b][n-i-1]=k;
			k++;
		}
		for(c=n-i-2;c>=i;c--){
			arr[n-i-1][c]=k;
			k++;
		}
		for(d=n-i-2;d>i;d--){
			arr[d][i]=k;
			k++;
		}
	}
	for(i=0;i<n;i++){
		for(a=0;a<n;a++){
			printf("%d  ",arr[i][a]);
		}
		printf("\n");
	}
}

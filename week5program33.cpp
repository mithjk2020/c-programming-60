//Given a stream of numbers, print average or mean of the stream at every point.
//Examples:
//Input: n=5, a={10 20 30 40 50}
//Output: 10 15 20 25 30
//Input: n=2, a={12 , 2}
//Output: 12, 7
#include<stdio.h>
int main()
{
	int i,j,n;
	float sum=0;
	printf("enter n:");
	scanf("%d",&n);
	int a[n],b[n];
	printf("enter array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<i+1;j++){
			sum+=a[j];
		}
		b[i]=sum/(i+1);
		sum=0;
	}
	for(i=0;i<n;i++){
		printf("%d ",b[i]);
	}
	return 0;
}

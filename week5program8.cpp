#include <stdio.h>
int main()
{
	int n;
	printf("enter the number of elements");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements:");
	for (int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (int i=0;i<n;i++)
	{
	
		for(int j=i+1;j<n;j++)
		{
			if (arr[j]==arr[i])
			{
				arr[j]=0;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
		    printf("%d\t",arr[i]);
		}
	}
}

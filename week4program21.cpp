#include<stdio.h>
int main()
{
	for(int i=0;i<4;i++){
		for(int j=0;j<i+1;j++){
			printf("%d ",i+3);
		}
		printf("\n");
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4-i;j++){
			printf("%d ",6-i);
		}
		printf("\n");
	}
	return 0;	
}

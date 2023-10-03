#include<stdio.h>
int main()
{
	for(int i=0;i<5;i++){
		for(int j=0;j<i+1;j++){
			printf(" ");
		}
		for(int k=0;k<=4-i;k++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<=5-i-1;j++){
			printf(" ");
		}
		for(int k=0;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

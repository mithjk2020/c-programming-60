#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<5;i++){
		
		for(j=i;j>=0;j--){
			printf("%c",'a'+4-j);
		}
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int s=1;
	for(int i=0;i<5;i++){
		for(int j=0;j<i+1;j++){
			
			printf("%d",s);
			s+=1;
		}
		printf("\n");
	}
	return 0;
}

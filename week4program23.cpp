#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<6;i++){
		if(i%2==0){
			printf("%d",i+1);
			for(j=0;j<6;j++){
				printf("%d",i);
			}
		}
		else{
			for(j=0;j<6;j++){
				printf("%d",i);
			}
			printf("%d",i+1);
		}
		printf("\n");
		
	}
	return 0;
}

	

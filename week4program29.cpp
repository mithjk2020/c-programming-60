#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n;
	for(i=0;i<5;i++){
			for(j=0;j<4-i;j++){
				printf(" ");
			}
			for(j=0;j<i+1 ;j++){
				if(i%2==0){
				    printf("1");
			    }
			    else{
		    	    printf("2");
			    }
			}
			printf("\n");
	}
	for(i=0;i<4;i++){
		for(j=0;j<i+1;j++){
			printf(" ");
		}
		for(j=0;j<4-i;j++){
			if(i%2==0){
				printf("2");
			}
			else{
				printf("1");
			}
		}
		printf("\n");
	}
	return 0;
}

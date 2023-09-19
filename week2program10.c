#include<stdio.h>
int main()
{
	int m,y;
	printf("enter the month and the year:");
	scanf("%d %d",&m,&y);
	if(m==1 ||m==3 ||m==5 || m==7 || m==8 || m==10 || m==12){
		printf("there are 31 days in the month");
	}
	else if(m==4 || m==6 || m==9 || m==11){
		printf("there are 30 days in the month");
	}
	else if(m==2){
		if(y%4==0 && y%100!=0 || y%400==0){
			printf("there are 29 days in the month");
		}
		else{
			printf("there are 28 days in the month");
		}
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int d,m,y;
	printf("enter the date, month and the year:");
	scanf("%d %d %d",&d,&m,&y);
	if(d<1 || m< 1 || y <1)
		printf("invalid input!!");
	if(m==1 ||m==3 ||m==5 || m==7 || m==8 || m==10 || m==12){
		if(d<=30)
			printf(" the next date is %d %d %d",d+1,m,y);
		else if(d==31 && m==12)
			printf("the next date is 1 1 %d",y+1);
		else
			printf("the next date is 1 %d %d",m+1,y);		
	}
	else if(m==4 || m==6 || m==9 || m==11){
		if(d<=29)
			printf(" the next date is %d %d %d",d+1,m,y);
		else if(d=30)
			printf("the next date is 1 %d %d",m+1,y);
	}
	else if(m==2){
		if(d<=27)
			printf("the next date is %d %d %d",d+1,m,y);
		else if(y%4==0 && (y%100!=0 || y%400==0 ) && d==28 )	
			printf("the next date is 29 2 %d",y);
		else
			printf("the next date is 1 3 %d",y);
	}
	return 0;
}

#include<stdio.h>
#include<conio.h>
int main()
{
int a;
scanf("%d",&a);
if(a%4==0 && a%100!=0 || a%400==0){
	printf("the year is leap");
}
else{
	printf("the year is not leap");
}
return 0;
}

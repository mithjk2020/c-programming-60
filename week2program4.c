#include<stdio.h>
#include<conio.h>
int main()
{
double a,b,c;
printf("1:metropolitan 2:tier1 3:tier2 4:tier3");
printf("enter your salary and region according to numbering:");
scanf("%lf %lf",&b,&a);
if(a==1){
	printf("%lf",b+(0.83*b));
}
else if(a==2){
	printf("%lf",b+(0.8*b));
}
else if(a==3){
	printf("%lf",b+(0.72*b));
}
else{
	printf("%lf",b+(0.68*b));
}
}

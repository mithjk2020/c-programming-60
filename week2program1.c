#include<stdio.h>
#include<conio.h>
int main()
{
float a,b,c;
printf("enter the 3 numbers:");
scanf("%f %f %f",&a,&b,&c);
if(a>b && a>c){
	printf("a is the greatest number.");
}
else if(b>a && b>c){
	printf("b is the greatest number.");
}
else{
	printf("c is the greatest number.");
}
return 0;
}

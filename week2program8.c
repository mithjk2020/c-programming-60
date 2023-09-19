#include<stdio.h>
#include<conio.h>
int main()
{
float a,b,c;
printf("enter the 3 sides of triangle:");
scanf("%f %f %f",&a,&b,&c);
if(a==b && a==c){
	printf("equilateral triangle");
}
else if(a==b || b==c || c==a){
	printf("isosceles triangle");
}
else{
	printf("scalene triangle");
}
return 0;
}

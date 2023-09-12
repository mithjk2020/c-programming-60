#include<stdio.h>

int main()
{
float a;
printf("enter the distance in km:");
scanf("%f",&a);
printf("the distance in meters is %f, the distance in cm is %f and the distace in mm is %f",a*1000,a*100000,a*1000000);
return 0;
}

#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d",&a);
printf("the number of years is %d",a/365);
b=(a%365)/30;
printf("the number of months is %d",b);
}

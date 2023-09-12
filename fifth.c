#include<stdio.h>

int main()
{
int a,b,c;
printf("enter the 2 numbers a and b respectively :");
scanf("%d %d",&a,&b);
c=a;
a=b;
b=c;
printf("number a is %d and number b is %d",a,b);
}

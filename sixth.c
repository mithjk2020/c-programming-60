#include<stdio.h>

int main()
{
int a,b,c;
printf("enter the 2 numbers a and b respectively :");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("the numbers now respectively are %d and %d",a,b);

}

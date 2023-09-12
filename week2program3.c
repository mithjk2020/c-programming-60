#include<stdio.h>
int main()
{
int a;
printf("enter the number of units used:");
scanf("%d",&a);
if(a<=0){
	printf("no electricity used");
}
else if(a<=100){
	printf("the cost of electricity used is %d",a*2);
}
else if(a<=200 && a>100){
	printf("the cost of electricity used is %d",a*5);
}
else{
	printf("the cost of electricity used is %d",a*10);
}
}


#include<stdio.h>
#include<math.h>
int main(){
	float p,r,t,a,b;
	scanf("%f %f %f",&p,&r,&t);
	printf("the simple interest is %f",(p*r*t)/100);
	a=pow(r+1,t);
	b=p*a;
	
	printf("the compound interest is %f",b-p);
	return 0;
}

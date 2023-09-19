#include<stdio.h>
#include<math.h>
int main()
{
	int p,c,b,m,cs,per;
	printf("enter all 5 subjects marks:");
	scanf("%d %d %d %d %d",&p,&c,&b,&m,&cs);
	per=(p+c+b+m+cs)/5;
	if(per>=90){
		printf("grade a");
	}
	else if(per>=80){
		printf("grade b");
	}
	else if(per>=70){
		printf("grade c");
	}
	else if(per>=60){
		printf("grade d");
	}
	else if(per>=40){
		printf("grade e");
	}
	else{
		printf("grade f");
	}
	
}

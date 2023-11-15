//Input: str1 = “aab”, str2 = “xxy”
//Output: True
//Explanation: ‘a’ is mapped to ‘x’ and ‘b’ is mapped to ‘y’.
#include<stdio.h>
int main()
{
	char s1[1000],s2[100];
	int i=0,j=0,k,m,n=0;
	printf("enter string s1:");
	scanf("%s",s1);
	printf("enter string s2:");
	scanf("%s",s2);
	while(s1[i]!='\0')
	i++;
	while(s2[j]!='\0')
	j++;
	if(i==j){
		for(k=0;k<i;k++){
			for(m=k+1;m<i;m++){
				if(s1[k]==s1[m]){
					if(s2[k]!=s2[m]){
						n++;
						printf("not a mapping.");
						m=i+1;
						k=i+1;
						i=i+1;    //remember these 3 steps here are to come out of the entire all for loops
					}
				}
			}
		}
		if(n==0){
			printf("it is a mapping!");
		}
	}
	else
	printf("it is not a mapping.");
	return 0;
}

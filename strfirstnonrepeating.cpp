//Input: str1 = “aab”, str2 = “xxy”
//Output: True
//Explanation: ‘a’ is mapped to ‘x’ and ‘b’ is mapped to ‘y’.
#include<stdio.h>
int main()
{
	char s1[1000];
	int i=0,j,k,m,n=0;
	printf("enter string s1:");
	scanf("%s",s1);
	while(s1[i]!=0){
 		i++;
	}
	for(j=0;j<i;j++){
		for(m=j+1;m<i;m++){
			if(s1[j]!=s1[m]){
				printf("the first non repeating character is %c",s1[j]);
				m=i+1;
				j=i+1;
			}
			else{
				for(n=m;n<i;n++){
					s1[n]=s1[n+1];
				}
				break;
			}
		}
	}	 
	return 0;
}

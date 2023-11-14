#include<stdio.h>
int main()
{
	char ch[1000];
	int j,i=0,vowel=0,consonant=0,digit=0,space=0;
	printf("enter the string:");
	scanf("%[^\n]s",ch);
	while(ch[i]!=0){
		i++;
	}
	for(j=0;j<i;j++){
		if(ch[j]=='a'||ch[j]=='e'||ch[j]=='i'||ch[j]=='o'||ch[j]=='u'){
			vowel++;
		}
		else if(ch[j]==' '){
			space++;
		}
		else if(ch[j]<58&&ch[j]>47){
			digit++;
		}
		else{
			consonant++;
		}
	}
	printf("the number of vowels is %d ",vowel);
	printf("\nthe number of spaces is %d ",space);
	printf("\nthe number of digits is %d ",digit);
	printf("\nthe number of consonants is %d",consonant);
	return 0;
}

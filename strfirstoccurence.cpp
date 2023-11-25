//Write a C program to print the first occurrence of the character in the given string without using strchr.
#include<stdio.h>
int main()
{
	 char s[1000],c;
	 int i=0,k;
	 printf("enter the string:");
	 scanf("%[^\n]s",s);
	 fflush(stdin);
	 printf("enter character to be searched for:");
	 scanf("%c",&c);
	 while(s[i]!='\0')
	 {
	 	i++;
	 }
	 for(k=0;k<i;k++){
	 	if(s[k]==c){
	 		printf("the index of the character is %d",k);
	 		break;
		 }
	 }
	 return 0;
}

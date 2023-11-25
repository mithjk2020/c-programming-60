//Write a C program to insert a new character in a given string at a given position.
#include<stdio.h>
int main()
{
	 char s[1000],c,m;
	 int i=0,k,j;
	 printf("enter the string:");
	 scanf("%[^\n]s",s);
	 fflush(stdin);
	 printf("enter character to be entered:");
	 scanf("%c",&c);
	 printf("enter index to be entered:");
	 scanf("%d",&j);
	 printf("%c",m);
	 while(s[i]!='\0')
	 i++;
	 for(k=i;k>=j;k--)
	 	s[k+1]=s[k];
	 s[j]=c;
	 printf("\n%s",s);
	 return 0;
}

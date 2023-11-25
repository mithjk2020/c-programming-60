//anagram
 #include<stdio.h>
 int main()
 {
 	char s[100],c[100];
 	int i=0,j=0,p=0,m,k,t,l;
 	printf("enter the string 1:");
	scanf("%s",s);
	printf("enter the string 2:");
	scanf("%s",c);
	while(s[i]!='\0')
	i++;
	for(k=0;k<i;k++){
		for(m=0;m<i;m++){
			if(s[k]==c[m]){
				p++;
			}
		}
	}
	if(p==i)
	printf("yes anagram");
	else
	printf("not anagram");
	return 0;
 }

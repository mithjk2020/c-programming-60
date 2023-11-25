 #include<stdio.h>
 int main()
 {
 	char s[100],c;
 	int i=0,j,k,m;
 	printf("enter the string:");
	scanf("%s",s);
	while(s[i]!='\0')
	i++;
	for(j=0;j<i;j++){
		for(k=j+1;k<i+1;k++){
			for(m=j;m<k;m++){
				printf("%c",s[m]);
			}
			printf("\n");
		}
	}
	return 0;
 }

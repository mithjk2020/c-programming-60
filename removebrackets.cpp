 #include<stdio.h>
 int main()
 {
 	char s1[1000];
 	int i=0,j=0,k,a,m,n;
 	printf("enter the first string:");
 	scanf("%s",s1);
 	while(s1[i]!=0){
 		i++;
	 }
	for(a=0;a<i;a++){
		if(s1[a]==')'||s1[a]=='('){
			for(m=a;m<i;m++){
				s1[m]=s1[m+1];
			}
			i--;
			a--;//very important here to check
		}
	}
	for(n=0;n<i;n++){
		printf("%c",s1[n]);
	}
	return 0;
 }

#include<stdio.h>
int main(){
	char c;
	scanf("%c",&c);
	if(c>=65&&c<=90){
		printf("%c",c+32);
	}else if(c>=97 && c<=122){
		printf("%c",c-32);
	}else{
		printf("%c",c);
	}
	return 0;
}
//printf("%d",);
//scanf("%d",&);

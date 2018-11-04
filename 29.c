/* 
Coder:117503445
https://github.com/117503445/XDOJ
GNU GPLV3 
*/ 
#include<stdio.h>
int main(){
	char a[100];
	int i;
	
	for(i=0;i<100;i++){
		a[i]='`';
	}
	fgets(a,100,stdin);
	int n=0;
	for(i=0;i<100;i++){
		if(a[i]='`'){
			n=i;
			printf("%d",n);
			printf("Yes");
			break;
		}
	}
	for(i=0;i<10;i++){
		printf("%c",a[i]);
	}
	printf("%d",n);
	return 0;
}
//printf("%d",);
//scanf("%d",&);

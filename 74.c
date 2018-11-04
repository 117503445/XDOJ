/* 
Coder:117503445
https://github.com/117503445/XDOJ
GNU GPLV3 
*/ 
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i=0;
	for(i=0;i<1000000;i++){
		if(i*i==n){printf("%d",i);
		break;
		}
		if(i>900000){
			printf("no");
		break;	
		}
}
	return 0;
}
//printf("%d",);
//scanf("%d",&);

/* 
Coder:117503445
https://github.com/117503445/XDOJ
GNU GPLV3 
*/ 
#include<stdio.h>
int main(){
	int sum=0;
	int n;
	scanf("%d",&n);
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	printf("%d\n",sum);
	return 0;
}
//printf("%d",);
//scanf("%d",&);

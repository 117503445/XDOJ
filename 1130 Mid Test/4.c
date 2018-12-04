#include<stdio.h>
#define p(x) printf("%d",x)
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	while(a+b>=24)
	a-=24;
	p(a+b);
	return 0;
}

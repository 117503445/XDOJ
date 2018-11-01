#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%.3f %.3f",(float)a*a*a/8*7.86*4/3*3.1415926/1000,(float)b*b*b/8*19.3*4/3*3.1415926/1000);
	return 0;
}

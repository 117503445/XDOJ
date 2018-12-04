#include<stdio.h>
#define p(x) printf("%d",x)
int main(){
	int r;
	scanf("%d",&r);
	printf("%.3f %.3f",(float)3.1415926*r*r,2*3.1415926*r);
	return 0;
}

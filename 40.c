#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a*a+b*b==c*c){
		printf("%d",a*b);
	}else if(a*a+c*c==b*b){
		printf("%d",a*c);
	}else if(b*b+c*c==a*a)
	{
	printf("%d",b*c);
	}else	{
		printf("no");
	}
	return 0;
}
//printf("%d",);
//scanf("%d",&);

#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int c=a%b;
	if(c==0){
		printf("yes");
	}
	else
	{
		printf("%d %d",a/b,c);
	}
	return 0;
}

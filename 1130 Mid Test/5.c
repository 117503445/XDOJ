#include<stdio.h>
#define p(x) printf("%d",x)
int main(){
	int q,w,e,r,t,y;
	scanf("%d%d%d%d%d%d",&q,&w,&e,&r,&t,&y);
	float a=0,b=0,c=0;
	a=((float)q-e)*(q-e)+((float)w-r)*(w-r);
	b=((float)t-q)*(t-q)+((float)y-w)*(y-w);
	c=((float)t-e)*(t-e)+((float)y-r)*(y-r);
	if(a==b+c||b==a+c||c==a+b){
		printf("yes");
	}else{
		printf("no");
	}
	return 0;
}

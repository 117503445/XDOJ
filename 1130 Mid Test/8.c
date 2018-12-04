#include<stdio.h>
#define p(x) printf("%d",x)
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int sum=0;
	int t=m%10;
	int y=0;
	while(m>0){
		sum+=m%10;
		y++;
		m/=10;
	}

	if(t==n&&sum%n==0){
		p(y);
	}else{
		printf("%d %d",sum,t);
	}
	
	return 0;
}

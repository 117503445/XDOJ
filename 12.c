#include<stdio.h>
int gcd(int a,int b);
int main(){
	gcd(0,0);
	int c[10000];
	int cnt=0;
	while(1){
		int a,b;
		scanf("%d %d",&a,&b);
		int g=gcd(a,b);
		
		if(g==-1)break;
		c[cnt]=g;
		cnt++;
	}
	int j=0;
	for(j=0;j<cnt;j++){
		if(cnt==j+1){printf("%d",c[j]);
		}else{
			printf("%d\n",c[j]);
		}
		
		
	}
	return 0;
}
int gcd(int a,int b){
	if(a==0){
		return -1;
	}
	int t=1;
	int i;
	for(i=1;i<=a;i++){
		if(a%i==0 && b%i==0){
			t=i;	
		}
	}
	return t;
}

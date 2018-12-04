#include<stdio.h>
#define p(x) printf("%d",x)
int main(){
	int d,e,n;
	scanf("%d%d%d",&d,&e,&n);
	int i;int c=0;
	
	for(i=0;i<n;i++){
		int q;
		scanf("%d",&q);
		if(q>d+e||q<d-e){
			c++;
		}
	}
	p(c);
	return 0;
}

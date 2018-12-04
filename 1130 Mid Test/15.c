#include<stdio.h>
#define p(x) printf("%d",x)
int main(){
	int n;
	scanf("%d",&n);
	int i;
	int s=0;
	for(i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		s+=a;
	}
	p(s);
	return 0;
}

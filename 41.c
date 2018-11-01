#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i;
	int j=n*n-n+1;
	for(i=0;i<n;i++){
		printf("%d ",j+i*2);	
	}
	
	return 0;
}
//printf("%d",);
//scanf("%d",&);

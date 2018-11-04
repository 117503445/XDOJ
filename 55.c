/* 
Coder:117503445
https://github.com/117503445/XDOJ
GNU GPLV3 
*/ 
#include<stdio.h>
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int i;
	int b=0;
	for(i=0;i<n;i++){
		int t;
		scanf("%d",&t);
		if(t==k){printf("%d ",i);b=1;
		}
	}
	if(b==0){printf("%d",-1);
	}
	
	return 0;
}
//printf("%d",);
//scanf("%d",&);

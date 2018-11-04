/* 
Coder:117503445
https://github.com/117503445/XDOJ
GNU GPLV3 
*/ 
#include<stdio.h>
int main(){
	int max=0;
	int n;
	scanf("%d",&n);
	int i,j;
	int e;
	for(i=0;i<n;i++){
		int t;
		scanf("%d",&t);
		if(i>0){
			if(t-e>max||e-t>max){
				max=t-e;
			}
		}
		e=t;
		if(max<0)max=-max;
	}
	
	printf("%d",max);
	return 0;
}
//printf("%d",);
//scanf("%d",&);

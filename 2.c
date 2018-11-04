/* 
Coder:117503445
https://github.com/117503445/XDOJ
GNU GPLV3 
*/ 
#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	//n=6;
	//m=3;
	int i;
	int a[n];
	//int a[6]={10,1,10,20,30,20};
//	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	

	int j;
	//xia JB pai
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			if(a[i]>a[j]){
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	if(m>n){
			for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
	}
		
	for(i=0;i<m;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
//printf("%d",);
//scanf("%d",&);

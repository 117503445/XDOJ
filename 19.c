/* 
Coder:117503445
https://github.com/117503445/XDOJ
GNU GPLV3 
*/ 
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
		//xia JB pai
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			if(a[i]>a[j]){
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		for(i=0;i<n;i++){
		if(a[i]%2==0)printf("%d ",a[i]);
	}		for(i=0;i<n;i++){
		if(a[i]%2==1)printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
//printf("%d",);
//scanf("%d",&);

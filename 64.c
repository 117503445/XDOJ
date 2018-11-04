/* 
Coder:117503445
https://github.com/117503445/XDOJ
GNU GPLV3 
*/ 
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,sum=0;
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<n-1;i++){
		if(a[i]>a[i-1]&&a[i]>a[i+1])sum++;
		if(a[i]<a[i-1]&&a[i]<a[i+1])sum++;
	}
	printf("%d",sum);
	return 0;
}
//printf("%d",);
//scanf("%d",&);

/* 
Coder:117503445
https://github.com/117503445/XDOJ
GNU GPLV3 
*/ 
#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	
	int t1;
	int h[10]={0};
	int sn=0;
	
	for(t1=0;t1<t;t1++){
		int n;
		scanf("%d",&n);
		int a[n];
		int i,j;
		for(i=0;i<n;i++){scanf("%d",&a[i]);
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
		int d=a[1]-a[0];
		for(i=0;i<n-1;i++){
			if(a[i+1]-a[i]!=d){
				h[t1]=-1;
				//printf("no\n");
				break;
			}
			if(i==n-2)//printf("%d\n",-d);
			h[t1]=-d;
		}
		
//		for(i=0;i<n;i++){
//			scanf("%d",&);
//		}

	}
	int i;
	for(i=0;i<10;i++){
		if(h[i]==-1)printf("no\n");
		if(h[i]>0)printf("%d\n",h[i]);
	}
	return 0;
}
//printf("%d",);
//scanf("%d",&);

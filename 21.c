/* 
Coder:117503445
https://github.com/117503445/XDOJ
GNU GPLV3 
*/ 
#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int a[m][n];
int q,w;
for(q=0;q<m;q++)
for(w=0;w<n;w++){
	scanf("%d",&a[q][w]);
}
	int u,y;
	
	int ok=0;
	
	for(u=0;u<m;u++)
	{
		for(y=0;y<n;y++){
			int ismaan=1;
			int i,j;
			for(i=0;i<m;i++){
				if(a[i][y]>a[u][y])ismaan=0;
			}
						for(j=0;j<n;j++){
				if(a[u][j]<a[u][y])ismaan=0;
			}
			
			if(ismaan){
				ok=1;
				printf("%d %d %d\n",u,y,a[u][y]);
			}
			
		}
	}
	if(ok==0){printf("no/n");
	}
	return 0;
}
//printf("%d",);
//scanf("%d",&);

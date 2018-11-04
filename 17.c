/* 
Coder:117503445
https://github.com/117503445/XDOJ
GNU GPLV3 
*/ 
#include<stdio.h>
int main(){
	int m;
	//m=4;
	scanf("%d",&m);
	int a[m][m];
	//int a[4][4]={{15,8,-2,6},{31,24,18,71},{-3,-9,27,13},{17,21,38,69}};
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	int b[2*m+2];
			for(i=0;i<2*m+2;i++){
			b[i]=0;
		}
	
	int k;
		k=0;
		for(i=0;i<m;i++)
		{
			for(j=0;j<m;j++){
				b[k]+=a[i][j];
			}
			k++;
		}
				for(j=0;j<m;j++)
		{
			for(i=0;i<m;i++){
				b[k]+=a[i][j];
			}
			k++;
		}
		for(i=0;i<m;i++){
			b[k]+=a[i][i];
		}
		k++;
		for(i=0;i<m;i++){
			b[k]+=a[i][m-i-1];
		}
		
		
			//xia JB pai
	for(i=0;i<2*m+2;i++)
		for(j=0;j<2*m+2;j++){
			if(b[i]>b[j]){
				int t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
		
		
		
		
//	printf("%d",b[0]);
	
	
//	for(i=0;i<m;i++)
//		{
//			for(j=0;j<m;j++){
//				printf("%d ",a[i][j]);
//			}
//			printf("\n");
//		}
//			printf("\n");
		for(i=0;i<2*m+2;i++){
			printf("%d ",b[i]);
		}
		printf("\n");
	return 0;
}
//printf("%d",);
//scanf("%d",&);

#include<stdio.h>
int main(){
	int n;
	int y[10000][3];
	int j=0;
	
	
	scanf("%d",&n);
	int a,b,c;
	for(a=0;a<10;a++)
		for(b=0;b<10;b++)
			for(c=0;c<10;c++)
				if(101*a+101*c+20*b==n){
					y[j][0]=a;
					y[j][1]=b;
					y[j][2]=c;
					j++;
				//	printf("%d %d %d\n",a,b,c);
				}
	int k;			
	for(k=0;k<j;k++){
		if(k==j-1){printf("%d %d %d",y[k][0],y[k][1],y[k][2]);
		}else{
		printf("%d %d %d\n",y[k][0],y[k][1],y[k][2]);	
		}	
		
	}
	return 0;
}
//printf("%d",);
//scanf("%d",&);

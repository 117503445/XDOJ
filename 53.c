#include<stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	
	int min=n%10;
	int max=n%10;
	int t=0;
	if(n==0)t=1;
	while(n>0){
		t++;
		int j=n%10;
		if(j<min){min=j;
		}
		if(j>max){max=j;
		}
		n/=10;
	}
	printf("%d %d %d",t,max,min);
	return 0;
}
//printf("%d",);
//scanf("%d",&);

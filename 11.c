#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int i;
	for(i=a;i<=b;i++){
		int j=0;
		int sum=0;
		for(j=1;j<i;j++){
			if(i%j == 0){
				//printf("%d",j);
				sum=sum+j;
			}
		}
		if(sum==i){
			printf("%d\n",i);
		}
	}
	return 0;
}

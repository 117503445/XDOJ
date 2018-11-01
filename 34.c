#include<stdio.h>
int main(){
	int a[4];
	scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]);
	int max=a[0];
	int i;
	
	for (i=1;i<=3;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("%d",max);
	return 0;
}

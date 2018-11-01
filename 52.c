#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int i;
	int a[6]={0};
	int sum=0;
	for(i=0;i<n;i++){
		int j;
		scanf("%d",&j);
		//printf("%d!!!",j);
		if(0<=j && j<=50){
			a[0]++;
		}else if(51<=j&&j<=100){
			a[1]++;
		}else if(101<=j&&j<=150){
			a[2]++;
		}else if(151<=j&&j<=200){
			a[3]++;
		}else if(201<=j&&j<=300){
			a[4]++;
		}else if(300<j){
			a[5]++;
		}
		sum+=j;
	}
	printf("%.2f\n",(float)sum/n);
	for(i=0;i<6;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
//printf("%d",);
//scanf("%d",&);

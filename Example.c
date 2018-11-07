/* 
Coder:117503445
https://github.com/117503445/XDOJ
GNU GPLV3 
*/ 
#include<stdio.h>
void pd(int x){
	printf("%d",x);
}
void pld(int x){
	printf("%d\n",x);
}
void pc(char c){
	printf("%c",c);
}
void plc(char c){
	printf("%c\n",c);
}
void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
//a int数组
//n 数组长度 
//b 0:升序,1:降序
//Exp: a,sizeof(a)/sizeof(a[0]),1 
void BubbleSort(int a[],int n,int b){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if((!b&&a[j+1]<a[j])||(b&&a[j+1]>a[j])) {
				swap(&a[j+1],&a[j]);
			} 
		}
	}
}
//printf("%d",);
//scanf("%d",&);
int main(){

	return 0;
}

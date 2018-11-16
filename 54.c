/* 
Coder:117503445
https://github.com/117503445/XDOJ
GNU GPLV3 
*/ 
#include<stdio.h>

#define p(x) printf("%d",x)
#define pl(x) printf("%d\n",x)
#define pc(x) printf("%c",x)
#define plc(x) printf("%c\n",x)
#define ps(x) printf(x)

void swap(int *a,int *b);
void BubbleSort(int a[],int n,int b);
int f(int a){
	if(a==0)return 1;
	if(a==1)return 1;
	return f(a-1)+f(a-2);
}
int main(){
	int n;
	scanf("%d",&n);
	n=f(n-1);
	int i;
	int b=0;
	for(i=2;i<n/2;i++){
		if(n%i==0){
			p(n);
			b=1;
			break;
		}
	}
	if(b==0){
		ps("yes");
	}
	return 0;
}

void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}

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

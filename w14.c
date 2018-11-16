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

double A(int a){
	if(a==1)return 1;
	return 1/(1+A(a-1));
}

int main(){
	int n;
	scanf("%d",&n);
	int i;
	int a[100];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++){
		printf("%.6lf",A(a[i]));
		if(i<n-1)ps("\n");
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

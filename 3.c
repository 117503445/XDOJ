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

int main(){
	char s1[26];
	int i,j,k;
	for(i=0;i<26;i++){
		s1[i]='\0';
	}
	gets(s1);
	int n1=0,n2=0;
	for(i=0;i<26;i++){
		if(s1[i]!='\0')n1++;
	}
	char s2[256];
	for(i=0;i<256;i++){
		s2[i]='\0';
	}
	gets(s2);
	for(i=0;i<256;i++){
		if(s2[i]!='\0')n2++;
	}
	int r[26]={0};
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			if(s1[i]==s2[j]){
				r[s1[i]-97]=1;
			}
		}
	}
	int b=0;
	for(i=0;i<26;i++){
		if(r[i]!=0){
			printf("%c ",i+97);
			b=1;
		}
	}
	if(b==0)ps("no");
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

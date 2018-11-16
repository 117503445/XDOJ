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
void cal(int a,int b,int c){
	if(c==43)p(a+b);
	if(c==45)p(a-b);
	if(c==42)p(a*b);
	if(c==47)p(a/b);
	if(c==37)p(a%b);
}
int pow(int x){
	int a=1;
	int i;
	for(i=0;i<x;i++){
		a*=10;
	}
	return a;
}
int main(){
	char s[100000];
	int i,j,k;
	for(i=0;i<100000;i++){
		s[i]='\0';
	}
	gets(s);
	int n=0;
	for(i=0;i<100000;i++){
	if(s[i]!='\0')n++;else break;
	}
	int a,b;//num1,num2
	int c;//op
	int k1=-1,k2;
	for(i=0;i<n;i++){
		if(s[i]==' '){
			if(k1==-1)k1=i;else k2=i;
		}
	}
	
	if(s[0]<48){
		//ps("!");
		c=s[0];
		int sum=0;
		int t=0;
		for(i=k2-1;i>=k1+1;i--){
			sum+=(s[i]-48)*pow(t);
			t++;
		}
		a=sum;
		sum=0;
		t=0;
		for(i=n-1;i>=k2+1;i--){
			sum+=(s[i]-48)*pow(t);
			//printf("!!! %d --",(s[i]-48));
			t++;
		}
		b=sum;
	}
	if(s[k1+1]<48){
		//ps("!");
		c=s[k1+1];
		int sum=0;
		int t=0;
		for(i=k1-1;i>=0;i--){
			sum+=(s[i]-48)*pow(t);
			t++;
		}
		a=sum;
		sum=0;
		t=0;
		for(i=n-1;i>=k2+1;i--){
			sum+=(s[i]-48)*pow(t);
			//printf("!!! %d --",(s[i]-48));
			t++;
		}
		b=sum;

		
	}
	if(s[k2+1]<48){
		//ps("!!");
		c=s[k2+1];
		int sum=0;
		int t=0;
		for(i=k1-1;i>=0;i--){
			sum+=(s[i]-48)*pow(t);
			t++;
		}
		a=sum;
		sum=0;
		t=0;
		for(i=k2-1;i>=k1+1;i--){
			sum+=(s[i]-48)*pow(t);
			//printf("!!! %d --",(s[i]-48));
			t++;
		}
		b=sum;
	}
	//p(k1);p(k2);
	//p(a);ps(" ");p(b);ps(" ");p(c);ps(" ");
	cal(a,b,c);
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

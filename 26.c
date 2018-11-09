/* 
Coder:117503445
https://github.com/117503445/XDOJ
GNU GPLV3 
*/ 
#include<stdio.h>
void pd(int x);
void pld(int x);
void pc(char c);
void plc(char c);
void ps(char s[]);
void swap(int *a,int *b);
void BubbleSort(int a[],int n,int b);

int isNum(char c){
	return c-48>=0 && c-48<=9;
}

int main(){
 	char szTest[1000]={0};
 	int len;
 	char b[100];
 	FILE *f;
	f=fopen("fee.txt","r");
	double sum=0;
 	do{
 		fgets(b,sizeof(b),f);
 		if(b[0]=='O'){
 		double i=0;
 		if(isNum(b[7])){i=(b[4]-48)*1000+(b[5]-48)*100+(b[6]-48)*10+b[7]-48;
		 }
		else if(isNum(b[6])){i=(b[4]-48)*100+(b[5]-48)*10+b[6]-48;
		 }else{
		 	i=(b[5]-48)*10+b[4]-48;
		 }
		 
		sum+=i;
		 }
 		//pd(strlen(b)); 
 		//printf("%s",a);
	 }
 	while(!feof(f));
 	double d=((int)sum/180+1)*0.17;
	printf("%.2lf",d);
 	fclose(f);
	return 0;
}
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
void ps(char s[]){
	printf(s);
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


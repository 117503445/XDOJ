#include<stdio.h>
 int huiwen(int x);
 int main(){
 	int n;
 	scanf("%d",&n);
 	int i;
 	int r[n];
 	for(i=0;i<n;i++){
 		int x;
 		scanf("%d",&x);
 		int result=huiwen(x);
 		r[i]=result;
	 }
	 for(i=0;i<n;i++){
	 	if(r[i]==-1){printf("no");} 
	 	else{ printf("%d",r[i]);} 
	 	if(i!=n-1)printf("\n");
	 }
 	return 0;
 }
 int huiwen(int x){
 	int n=0;//储存x的位数 
 	int x_copy=x;//创建1个x的副本,用于计算x的位数 
 	while(x_copy>0){
 		n++;
 		x_copy/=10;
	 }//这段 计算了x的位数 
 	int a[n];//创建数组 
 	int i;
 	n=0;
 	while(x>0){
 		a[n]=x%10;
 		n++;	
 		x/=10;
	 }//把x的每一位储存进 a 数组 
 	for(i=0;i<n/2;i++){
 		if(a[i]!=a[n-1-i]){
 			return -1;
		 }//不是回文数,返回-1 
	 }
 	
 	
 	int sum=0;
 	for(i=0;i<n;i++){
 		sum+=a[i];
	 }
 	return sum;//回文数,把每一位都加起来 
 } 

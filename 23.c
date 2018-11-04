/* 
Coder:117503445
https://github.com/117503445/XDOJ
GNU GPLV3 
*/ 
#include<stdio.h>
int main(){
	int l=0;
	char s[100000];
	while(1){
		
	
	char a[100000];
	int i;
	
	for(i=0;i<100000;i++){
		a[i]='`';
	}
	
	fgets(a,100000,stdin);
	if(a[0]=='*'&&a[1]=='*'){break;
	}
	//printf("%c",a[0]);
	int n=0;
	for(i=0;i<100000;i++){
		if(a[i]=='`'){
			n=i-2;break;
		}
	}
	if(n>l){
		l=n;
		int i=0;
		for(i=0;i<n;i++){
			s[i]=a[i];
		}
	}
	}
	printf("%d\n",l);
	int i;
	for(i=0;i<l;i++){
		printf("%c",s[i]);
	}
	
	
	return 0;
}
//printf("%d",);
//scanf("%d",&);

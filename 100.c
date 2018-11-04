/* 
Coder:117503445
https://github.com/117503445/XDOJ
GNU GPLV3 
*/ 
#include<stdio.h>
int main(){
	char a[4];
	int i;
	for(i=0;i<4;i++){
		scanf("%c",&a[i]);		
	}
		for(i=0;i<4;i++){
		if(a[i]>=65&&a[i]<=90){a[i]+=32;
		}else if(a[i]>=97&&a[i]<=122)		{
			a[i]-=32;
		}else if(a[i]>=48 &&a[i]<=57){
			a[i]='*';
		}else{
			a[i]='@';
		}
	}
		for(i=0;i<4;i++){
		printf("%c",a[i]);		
	}
	return 0;
}
//printf("%d",);
//scanf("%d",&);

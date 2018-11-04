/* 
Coder:117503445
https://github.com/117503445/XDOJ
GNU GPLV3 
*/ 
#include<stdio.h>
int main(){
	char c;
	int b;
	char s[100];
	int sum=0;
	//c='L';
	//b=1;
	scanf("%c",&c);scanf("%d",&b);
	int i;
	for(i=0;i<100;i++){
		s[i]=0;
	}
	scanf("%s",&s);
	int n=0;
	
		for(i=0;i<100;i++){
		if(s[i]!=0)n++;
	}
	if(b==0){
			for(i=0;i<n;i++){
		if(s[i]>92)s[i]-=32;
	}
	if(c>92)c-=32;
	}
	for(i=0;i<n;i++){
		
		if(s[i]==c)sum++;
	}
	printf("%d",sum);
	return 0;
}
//printf("%d",);
//scanf("%d",&);

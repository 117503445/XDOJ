/* 
Coder:117503445
https://github.com/117503445/XDOJ
GNU GPLV3 
*/ 
#include<stdio.h>
int main(){
	char a[100];
	int i;
	for(i=0;i<100;i++){
		a[i]=0;
	}
	scanf("%s",&a);
		int n=0;
		for(i=0;i<100;i++){
		if(a[i]!=0){n++;
		}
	}
	
	char b[100];
	char c[100];
	char d[100];
	int bi=0,ci=0,di=0;
	for(i=1;i<n;i++){
		if(a[i]>a[0]){
			b[bi]=a[i];
			bi++;
		}else if(a[i]<a[0]){
			c[ci]=a[i];
			ci++;
		}else{
			d[di]=a[i];
			di++;
		}
		
		
		
		
		
	}
	
	int j;
	
	
	
	
		for(i=0;i<bi;i++){
		//printf("%c",b[i]);
	}
		//printf("***\n");
	

		for(i=0;i<ci;i++)
		for(j=0;j<ci-1;j++){
			if(c[j]>c[j+1]){
				int t=c[j];
				c[j]=c[j+1];
				c[j+1]=t;
			}
		}
			for(i=0;i<di;i++)
		for(j=0;j<di-1;j++){
			if(d[j]>d[j+1]){
				int t=d[j];
				d[j]=d[j+1];
				d[j+1]=t;
			}
		}
	for(i=0;i<bi;i++){
		printf("%c",b[i]);
	}
	printf("%c",a[0]);
		for(i=0;i<ci;i++){
		printf("%c",c[i]);
	}
		for(i=0;i<di;i++){
		printf("%c",d[i]);
	}

	
	//printf("%d",n);
	return 0;
}
//printf("%d",);
//scanf("%d",&);

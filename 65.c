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
	char s[13];
	gets(s);
	int a[10];
	a[0]=s[0]-48;
	a[1]=s[2]-48;
	a[2]=s[3]-48;
	a[3]=s[4]-48;
	a[4]=s[6]-48;
	a[5]=s[7]-48;
	a[6]=s[8]-48;
	a[7]=s[9]-48;
	a[8]=s[10]-48;
	a[9]=s[12]-48;
	int t=(a[0]+a[1]*2+a[2]*3+a[3]*4+a[4]*5+a[5]*6+a[6]*7+a[7]*8+a[8]*9)%11;
	if(a[9]==t||(t==10&&a[9]==40)){
		ps("Right");
	}
	else{

		int i;
		for(i=0;i<12;i++)printf("%c",s[i]);
				if(t==10){printf("%c",'X');
		}else{printf("%c",t+48);
		}
		
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

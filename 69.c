/* 
Coder:117503445
https://github.com/117503445/XDOJ
GNU GPLV3 
*/
#include <stdio.h>
#include <string.h>
#define p(x) printf("%d", x)
#define pl(x) printf("%d\n", x)
#define pc(x) printf("%c", x)
#define plc(x) printf("%c\n", x)
#define ps(x) printf(x)

void swap(int *a, int *b);
void BubbleSort(int a[], int n, int b);

int main()
{
	//char ss[100][100];
	//int i,j;
	//for(i=0;i<100;i++){
	//	for(j=0;j<100;j++){
	//		ss[i][j]=0;
	//	}
	//}
	
	int i,j;
	char st[100];
	scanf("%s",st);
	char st0[100];
	strcpy(st0,st);
	int mg;//min gan
	scanf("%d",&mg);
	int n;
	scanf("%d",&n);
	if(mg!=1){
		for(i=0;i<strlen(st);i++){
			if(st[i]<'a'){
				st[i]+='a'-'A';
			}
		}
	}
	for(i=0;i<n;i++){
		char s[100];
		scanf("%s",s);
		char s0[100];
		strcpy(s0,s);
		int k;
		if(mg!=1){
			for(k=0;k<strlen(s);k++){
				if(s[k]<'a'){
					s[k]+='a'-'A';
				}
			}
		}
		
		
		
		int b=0;
		if(strlen(s)>=strlen(st)){
			for(j=0;j<strlen(s)-strlen(st)+1;j++){
				//printf("j=%d\n",j);
				int bb=1;
				
			for(k=0;k<strlen(st);k++){
				if(s[j+k]!=st[k]){
					bb=0;
					break;
				}
			}
			if(bb==1){
				b=1;
				break;
			}
		}
		if(b==1){
			printf("%s\n",s0);
		}
		}

	}
	return 0;
}

void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
//a int array
//n array length
//b 0:up,1:down
//Exp: a,sizeof(a)/sizeof(a[0]),1
void BubbleSort(int a[], int n, int b)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if ((!b && a[j + 1] < a[j]) || (b && a[j + 1] > a[j]))
			{
				swap(&a[j + 1], &a[j]);
			}
		}
	}
}

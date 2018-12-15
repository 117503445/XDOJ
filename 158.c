/* 
Coder:117503445
https://github.com/117503445/XDOJ
GNU GPLV3 
*/
#include <stdio.h>
#include<string.h>

#define p(x) printf("%d", x)
#define pl(x) printf("%d\n", x)
#define pc(x) printf("%c", x)
#define plc(x) printf("%c\n", x)
#define ps(x) printf(x)

void swap(int *a, int *b);
void BubbleSort(int a[], int n, int b);

int main()
{
	char s[100]={'\0'};
	gets(s);
	int a[5]={0};//A-Z,a-z,space,0-9,other
	int i;
	for(i=0;i<strlen(s);i++){
		int c=s[i];
		if(c>=65&&c<=90){
			a[0]++;
		}else if(c>=97&&c<=122){
			a[1]++;
		}else if(c==32){
			a[2]++;
		}else if(c>=48&&c<=57){
			a[3]++;
		}else{
			a[4]++;
		}
	}
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
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
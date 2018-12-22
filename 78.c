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
	char s[100]={0};
	gets(s);
	int sc=0;
	if(strlen(s)>0)sc++;
	if(strlen(s)>8)sc++;
	int a[4]={0};
	int i;
	for(i=0;i<strlen(s);i++){
		if(s[i]>='A'&&s[i]<='Z'){
			a[0]++;
		}else if(s[i]>='a'&&s[i]<='z'){
			a[1]++;
		}else if(s[i]>='0'&&s[i]<='9'){
			a[2]++;
		}else {
			a[3]++;
		}
	}
	int n=0;
	for(i=0;i<4;i++){
		if(a[i]>0)n++;
	}
	if(n>=2){
		sc+=n-1;
	}
	p(sc);
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


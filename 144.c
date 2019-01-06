/* 
Coder:117503445
https://github.com/117503445/XDOJ
GNU GPLV3 
*/
#include <stdio.h>

#define p(x) printf("%d", x)
#define pl(x) printf("%d\n", x)
#define pc(x) printf("%c", x)
#define plc(x) printf("%c\n", x)
#define ps(x) printf(x)

void swap(int *a, int *b);
void BubbleSort(int a[], int n, int b);

int main()
{
	int a,b;
	char c;
	scanf("%d %d %c",&a,&b,&c);
	int r=0;
	if(c=='+'){
		r=a+b;
		printf("%d+%d=%d",a,b,r);
	}else if(c=='-'){
		r=a-b;
		printf("%d-%d=%d",a,b,r);
	}else if(c=='*'){
		r=a*b;
		printf("%d*%d=%d",a,b,r);
	}else if(c=='/'){
		r=a/b;
		printf("%d/%d=%d",a,b,r);
	}else if(c=='%'){
		r=a%b;
		printf("%d",a);
		putchar('%');
		printf("%d=%d",b,r);
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

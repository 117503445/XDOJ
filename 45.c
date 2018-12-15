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
	char s[100] = {'\0'};
	gets(s);
	int a[100] = {0};
	int n = 0;

	int lastnum = 0;
	int b=0;//防止数字就是0,表示现在正在加数字
	int i;
	for (i = 0; i < 100; i++)
	{
		int j = s[i] - 48;
		if (j >= 0 && j <= 9)
		{
			lastnum *= 10;
			lastnum += j;
			b=1;
		}
		else
		{
			if (b)
			{
				a[n] = lastnum;
				lastnum = 0;
				n++;
				b=0;
			}
		}
	}
	BubbleSort(a,n,1);
	for (i = 0; i < n; i++)
	{
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
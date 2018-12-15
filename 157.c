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
	int m, n;
	scanf("%d %d", &m, &n);
	int a[m * n];
	int i;
	for (i = 0; i < m * n; i++)
	{
		scanf("%d", &a[i]);
	}
	BubbleSort(a, m * n, 0);
	int j;

	int b = 1; //0-zheng 1-fan

	for (i = n - 1; i < m * n; i += n)
	{
		if (b)
		{
			for (j = i; j >= i - n + 1; j--)
			{
				printf("%d ", a[j]);
			}
			b = 0;
		}
		else
		{
			for (j = i - n + 1; j <=i ; j++)
			{
				printf("%d ", a[j]);
			}
			b = 1;
		}

		printf("\n");
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
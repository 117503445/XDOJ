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
void BubbleSort(int a[], int c[], int n, int b);

int main()
{
	int n;
	scanf("%d", &n);
	int i;
	int a[30] = {0}, b[30] = {0}, c[30] = {0};
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		//printf("i=%d,a[i]=%d\n", i, a[i]);
	}
	for (i = 0; i < n; i++)
	{
		int j;
		int isInserted = 0;
		for (j = 0; j < n; j++)
		{
			if (c[j] != 0 && b[j] == a[i])
			{
				c[j]++;
				isInserted = 1;
				//printf("Inserted,i=%d,a[i]=%d\n", i, a[i]);
				break;
			}
		}
		if (isInserted == 0)
		{
			//Create New
			for (j = 0; j < n; j++)
			{
				if (c[j] == 0)
				{
					c[j]++;
					b[j] = a[i];
					//printf("Create New,i=%d,a[i]=%d\n", i, a[i]);
					break;
				}
			}
		}
	}
	int nn = 0;
	for (i = 0; i < n; i++)
	{

		if (c[i] != 0)
			nn++;
		else
			break;
	}
	BubbleSort(b, c, nn, 0);
	for (i = 0; i < n; i++)
	{
		if (c[i] == 0)
		{
			break;
		}
		printf("%d:%d\n", b[i], c[i]);
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
void BubbleSort(int a[], int c[], int n, int b)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if ((!b && a[j + 1] < a[j]) || (b && a[j + 1] > a[j]))
			{
				swap(&a[j + 1], &a[j]);
				swap(&c[j + 1], &c[j]);
			}
		}
	}
}
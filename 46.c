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
	int i;
	for (i = 0; i < m; i++)
	{
		int a[n];
		int j;
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[j]);
		}

		int maxLength = 0;
		int maxBegin = 0;
		int maxEnd = 0;

		int currentLength = 0;
		int currentBegin = 0;
		int currentEnd = 0;

		int b = 0;

		for (j = 0; j < n; j++)
		{
			if (a[j] == 1)
			{
				if (b == 1)
				{
					currentEnd = j;
					currentLength++;
				}
				else
				{
					currentBegin = j;
					currentEnd = j;
					currentLength = 1;
				}
				b = 1;
			}
			else
			{
				b = 0;
				if (currentLength > maxLength)
				{
					maxLength = currentLength;
					maxBegin = currentBegin;
					maxEnd = currentEnd;
				}
			}
		}

		//最后1个区间
		if (currentLength > maxLength)
		{
			maxLength = currentLength;
			maxBegin = currentBegin;
			maxEnd = currentEnd;
		}
		
		if (maxLength == 0)
		{
			printf("-1 -1\n");
		}
		else
		{
			printf("%d %d\n", maxBegin, maxEnd);
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
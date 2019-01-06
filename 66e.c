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
	int n;
	scanf("%d", &n);
	int a[n][n];
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	int z = 1; //0-leftdown,1-rightup
	int x = 0, y = 0;
	printf("%d ", a[x][y]);
	i = 0;
	if (n != 1)
	{
		while (1)
		{
			i++;
			if (i > 50)
			{
				break;
			}

			if (z == 0)
			{
				if (y - 1 < 0)
				{
					z = 1;
					if (x + 1 < n)
					{
						x++;
					}
					else
					{
						y++;
					}
				}
				else
				{
					if (x + 1 < n)
					{
						x++;
						y--;
					}
					else
					{
						y++;
						z = 1;
					}
				}
			}
			else
			{
				if (x - 1 < 0)
				{
					z = 0;
					if (y + 1 < n)
					{
						y++;
					}
					else
					{
						x++;
					}
				}
				else
				{
					if (y + 1 < n)
					{
						x--;
						y++;
					}
					else
					{
						x++;
						z = 0;
					}
				}
			}
			//printf("\nx=%d,y=%d,z=%d\n",x,y,z);
			printf("%d ", a[x][y]);
			if (x == n - 1 && y == n - 1)
			{
				break;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			//printf("%d",a[i][j]);
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

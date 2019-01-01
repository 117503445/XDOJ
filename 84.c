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
struct file
{
	int a;
	int b;
	int c;
	int d;
};
void swap(struct file *a, struct file *b);
int main()
{
	int n;
	scanf("%d", &n);
	int i;
	struct file f[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d/%d/%d %d", &f[i].a, &f[i].b, &f[i].c, &f[i].d);
	}
	int j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (f[j].a < f[j + 1].a)
			{
				swap(&f[j], &f[j + 1]);
			}
			else if (f[j].a == f[j + 1].a)
			{
				if (f[j].b < f[j + 1].b)
				{
					swap(&f[j], &f[j + 1]);
				}
				else if (f[j].b == f[j + 1].b)
				{
					if ((f[j].c < f[j + 1].c))
					{
						swap(&f[j], &f[j + 1]);
					}
					else if (f[j].c == f[j + 1].c)
					{
						if (f[j].d < f[j + 1].d)
						{
							swap(&f[j], &f[j + 1]);
						}
					}
				}
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d/%d/%d %d\n", f[i].a, f[i].b, f[i].c, f[i].d);
	}
	return 0;
}

void swap(struct file *a, struct file *b)
{
	struct file t = *a;
	*a = *b;
	*b = t;
}
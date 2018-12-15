#include <stdio.h>
int main()
{
	int deng(int a[], int n);
	int n, x, i, j;
	int a[100] = {0};
	int b[100] = {0};
	int c[100] = {0};
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x);
		for (j = 0; j < x; j++)
		{
			scanf("%d", &a[j]);
		}
		b[i] = deng(a, x);
		c[i] = a[1] - a[0];
	}
	for (i = 0; i < n; i++)
	{
		if (b[i] == 1)
			printf("%d\n", c[i]);
		if (b[i] == 2)
			printf("no\n");
	}
	return 0;
}
int deng(int a[], int n)
{
	int i, j, b, c, d, t, e;
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			a[j] > a[j + 1] ? (t = a[j], a[j] = a[j + 1], a[j + 1] = t) : (a[j] = a[j], a[j + 1] = a[j + 1]);
		}
	}
	j = 1;
	for (i = 0; i < n; i++)
	{
		t = a[1] - a[0];
		c = a[i + 1] - a[i];
		if (t != c)
			break;
		if (t == c)
			j++;
	}
	if (j == i)
		return (1);
	if (j != i)
		return (2);
}

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
long long mypow(long long a, long long n)
{
	long long i;
	for (i = 0; i < n; i++)
	{
		a *= 10;
	}
	return a;
}
int main()
{
	char s[100];
	gets(s);
	while (s[0] != '\0')
	{
		long long i;
		long long n = 0;
		long long sum = 0;
		for (i = 99; i >= 0; i--)
		{
			long long b = s[i] - 48;
			if (b >= 0 && b <= 9)
			{
				//printf("b=%d,n=%d\n", b, n);
				sum += mypow(b, n);
				//printf("mypow=%d\n", mypow(b, n));
				n++;
			}
		}

		//pl(sum);
		if (sum == 1 || sum == 0 || sum == 2)
		{
			printf("%lld\n",sum);
		}
		else
		{
			for (i = sum - 1; i >= 2; i--)
			{
				if (sum % i == 0)
				{
					printf("%lld\n",i);
					break;
				}
			}
			if (i == 1)
			{
				printf("%lld\n",sum);
			}
		}

		for (i = 0; i < 100; i++)
		{
			s[i] = '\0';
		}
		gets(s);
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
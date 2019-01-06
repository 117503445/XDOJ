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
	scanf("%d",&n);
	long long m=0,m0=0;
	int i;
	for(i=0;i<n;i++){
		long long t;
		scanf("%lld",&t);
		long long tt=t;
		int s=0;
		while(tt>0){
			s+=tt%10;
			tt/=10;
		}
		if(s>m0){
			m0=s;
			m=t;
		}else if(s==m0){
			if(t>m){
				m=t;
			}
		}
	}
	printf("%lld",m);
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

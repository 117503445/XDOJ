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
	int a[20]={0};
	int i;
	for(i=0;i<n;i++){
		int p;
		scanf("%d",&p);
		int j;
		int b=0;
		for(j=0;j<20;j++){
			if(a[j]+p<=5){
				int k;
				for(k=0;k<p;k++){
					printf("%d ",5*j+a[j]+k+1);
				}printf("\n");
				a[j]+=p;
				b=1;
				break;
			}
		}
		if(b==0){
			while(p>0){
				int j;
				for(j=0;j<20;j++){
					if(a[j]<5){
					printf("%d ",5*j+a[j]+1);
					a[j]++;
					p--;
					break;	
					}
				}
			}
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

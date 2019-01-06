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
	int d[101][101]={0};
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;i++){
		int x1,y1,x2,y2;
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		
		for(j=x1;j<x2;j++){
			for(k=y1;k<y2;k++){
				d[j][k]=1;
			}
		}
	}
	int s=0;
	for(i=0;i<101;i++){
		for(j=0;j<101;j++){
			if(d[i][j]!=0){
				s++;
			}
		}
	}
	printf("%d",s);
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

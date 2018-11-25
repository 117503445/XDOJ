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
	int n,m;
	scanf("%d%d",&n,&m);
	char s[n][32];//队名
	int a[n][8];//队名index,胜场数,平局数,负场数
	//进球数,失球数,积分,净胜球
	int i,j;
	
	for(i=0;i<n;i++){
		a[i][0]=i;
		scanf("%s%d%d%d%d%d",s[i],&a[i][1],&a[i][2],&a[i][3],
		&a[i][4],&a[i][5]);
		a[i][6]=3*a[i][1]+a[i][2];
		a[i][7]=a[i][4]-a[i][5];
	}
	
	//		printf("\n");
//		for(i=0;i<n;i++){
//			printf("%s\t",s[a[i][0]]);
//			for(j=0;j<8;j++)printf("%d\t",a[i][j]);
//	printf("\n");
//		}

	for (i = 0; i < n - 1; i++)
	{
		//printf("i=%d ",i);
		for (j = 0; j < n - i -1; j++)
		{
			if (a[j][6]<a[j+1][6])
			{
				//printf("%d ",j);
				swap(&a[j][0], &a[j+1][0]);
				swap(&a[j][1], &a[j+1][1]);
				swap(&a[j][2], &a[j+1][2]);
				swap(&a[j][3], &a[j+1][3]);
				swap(&a[j][4], &a[j+1][4]);
				swap(&a[j][5], &a[j+1][5]);
				swap(&a[j][6], &a[j+1][6]);
				swap(&a[j][7], &a[j+1][7]);
			}
		}
	}
		for (i = 0; i < n - 1; i++)
	{
		//printf("i=%d ",i);
		for (j = 0; j < n - i -1; j++)
		{
			if ((a[j][6]==a[j+1][6])&&(a[j][7]<a[j+1][7]))
			{
				//printf("%d ",j);
				swap(&a[j][0], &a[j+1][0]);
				swap(&a[j][1], &a[j+1][1]);
				swap(&a[j][2], &a[j+1][2]);
				swap(&a[j][3], &a[j+1][3]);
				swap(&a[j][4], &a[j+1][4]);
				swap(&a[j][5], &a[j+1][5]);
				swap(&a[j][6], &a[j+1][6]);
				swap(&a[j][7], &a[j+1][7]);
			}
		}
	}
//	printf("\n");
//	for(i=0;i<n;i++){
//		printf("%s\t",s[a[i][0]]);
//		for(j=0;j<8;j++)printf("%d\t",a[i][j]);
//printf("\n");
//	}
	for(i=0;i<m;i++){
		printf("%d %s %d %d\n",i+1,s[a[i][0]],a[i][6],a[i][7]);
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

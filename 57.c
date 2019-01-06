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
	int x=0,y;
	
	scanf("%d %d %d",&n,&m,&y);
	y--;
	//printf("n=%d,m=%d,y=%d\n",n,m,y);
	getchar();
	//printf("YES\n");
	char s[n][m];
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%c",&s[i][j]);
			//printf("i=%d,j=%d\n",i,j);	
		}getchar();
	}
	//printf("YES\n");
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			//printf("%c",s[i][j]);
		}//printf("\n");
	}
	
	int step=0;
	int r[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			r[i][j]=0;
		}
	}
	int loop=0;//is loop ?
	r[x][y]=1;
	while(1){
		step++;
		char c=s[x][y];
		//printf("x=%d,y=%d,c=%c\n",x,y,c);
		
		
		if(c=='W'){
			if(y-1<0){
				break;
			}
			if(r[x][y-1]==1){
				loop=1;
				break;
			}
			y--;
		}
		if(c=='E'){
			if(y+1==m){
				break;
			}
			if(r[x][y+1]==1){
				loop=1;
				break;
			}
			y++;
		}
		if(c=='S'){
			if(x+1==n){
				break;
			}
			if(r[x+1][y]==1){
				loop=1;
				break;
			}
			x++;
		}
		if(c=='N'){
			if(x-1<0){
				break;
			}
			if(r[x-1][y]==1){
				loop=1;
				break;
			}
			x--;
		}
		r[x][y]=1;
	}
	if(loop==0){
		printf("out %d",step);
	}else{
		printf("loop %d",step);
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

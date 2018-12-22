/* 
Coder:117503445
https://github.com/117503445/XDOJ
GNU GPLV3 
*/
#include <stdio.h>
#include <string.h>

#define p(x) printf("%d", x)
#define pl(x) printf("%d\n", x)
#define pc(x) printf("%c", x)
#define plc(x) printf("%c\n", x)
#define ps(x) printf(x)

void swap(int *a, int *b);
void BubbleSort(int a[], int n, int b);

int main()
{
	char s1[100]={0};
	char s2[10]={0};
	gets(s1);
	gets(s2);
	if(s2[strlen(s2)-1]==' ')s2[strlen(s2)-1]=0;
	int i=0;
	int j=0;
	
	int c=0;
	
	int b=1;
	
	for(j=0;j<strlen(s2);j++){
		if(s2[j]!=s1[j]){
			b=0;
		}
	}
	if(s1[j]!=' ')b=0;
	if(b)c++;
	
	for(i=0;i<strlen(s1)-1;i++){
		if(s1[i]==' '){
			b=1;
			//printf("%c %c\n",s2[j],s1[i+1+j]);
			for(j=0;j<strlen(s2);j++){
				
				if(s2[j]!=s1[i+1+j]){
					b=0;
				}
			}
			if(i+1+j!=strlen(s1)&&s1[i+1+j]!=' ')b=0;
			if(b)c++;
		}
	}
	printf("%s %d",s2,c);
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


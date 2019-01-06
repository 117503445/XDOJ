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

void swap(char *a, char *b);
void BubbleSort(char a[], int n, int b);

int main()
{
	char s[80];//="xA3T7p";
	gets(s);
	char ts[80]={'0'};
	int p=0;
	int i;
	for(i=0;i<strlen(s);i++){
		if('a'<=s[i]&&s[i]<='z'){
			s[i]-='a'-'A';
		}
		if('A'<=s[i]&&s[i]<='Z'){
			ts[p]=s[i];
			p++;
		}
	}
	BubbleSort(ts,p,0);
	p=0;
	for(i=0;i<strlen(s);i++){
		if('A'<=s[i]&&s[i]<='Z'){
			putchar(ts[p]);
			p++;
		}else{
			putchar(s[i]);
		}
	}
	//puts(ts);
	//puts(s);
	
	return 0;
}

void swap(char *a, char *b)
{
	char t = *a;
	*a = *b;
	*b = t;
}
//a int array
//n array length
//b 0:up,1:down
//Exp: a,sizeof(a)/sizeof(a[0]),1
void BubbleSort(char a[], int n, int b)
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

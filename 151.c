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

void swap(char a[], char b[]);

int main()
{
	int n;
	scanf("%d",&n);
	char s[10][20];
	int i;
	for(i=0;i<n;i++){
		scanf("%s",s[i]);
	}
	int j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if(strcmp(s[j],s[j+1])>0){
				swap(s[j],s[j+1]);
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",s[i]);
	}
	return 0;
}

void swap(char a[], char b[])
{
	char t[100]={'\0'};
	strcpy(t, a);
	strcpy(a, b);
	strcpy(b, t);
}

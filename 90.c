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
	char ss1[100];//="A11pp";
	char ss2[100];//="ioa11pple";
	gets(ss1);
	gets(ss2);
	int i;
	for(i=0;i<strlen(ss1);i++){
		if('a'<=ss1[i]&&ss1[i]<='z'){
			ss1[i]-='a'-'A';
		}
	}
	for(i=0;i<strlen(ss2);i++){
		if('a'<=ss2[i]&&ss2[i]<='z'){
			ss2[i]-='a'-'A';
		}
	}
	char s1[100];//shorter
	char s2[100];//longer
	
	if(strlen(ss1)<strlen(ss2)){
		strcpy(s1,ss1);
		strcpy(s2,ss2);
	}else{
		strcpy(s1,ss2);
		strcpy(s2,ss1);
	}
	int l=0;//length
	
	int len1=strlen(s1);
	int len2=strlen(s2);
	
	int j,k,o;
	for(i=0;i<len1;i++){//the begin in s1
		for(j=1;j<=len1-i;j++){//the length of substring
			//putchar('\n');
			for(k=0;k<=len2-j;k++){//the begin in s2
			int b=1;
			//printf("i=%d,j=%d,k=%d\n",i,j,k);
				for(o=0;o<j;o++){
					//printf("%c %c\n",s1[i+o],s2[k+o]);
					if(s1[i+o]!=s2[k+o]){
						b=0;
						break;
					}
				}
				if(b==1){
					if(j>l){
					l=j;//printf("YESSSSSSSSSS\n");	
					}
					
				
				}
			}
		}
	
	}
	//puts(s1);
	//puts(s2);
	printf("%.3lf",2*(double)l/(len1+len2));
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

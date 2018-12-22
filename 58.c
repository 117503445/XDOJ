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
struct student{
	char name[100];
	int score;
	int eng;
};
void swap(struct student *a, struct student *b);
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	
	struct student sd[m];
	int i,j;
	for(i=0;i<m;i++){
		scanf("%s %d %d",sd[i].name,&sd[i].score,&sd[i].eng);
	}
	for(i=0;i<m-1;i++){
		for(j=0;j<m-i-1;j++){
			if(sd[j].score<sd[j+1].score){
				swap(&sd[j],&sd[j+1]);
			}else if(sd[j].score==sd[j+1].score){
				if(sd[j].eng<sd[j+1].eng){
					swap(&sd[j],&sd[j+1]);
				}
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s %d %d\n",sd[i].name,sd[i].score,sd[i].eng);
	}
	return 0;
}

void swap(struct student *a, struct student *b)
{
	struct student t = *a;
	*a = *b;
	*b = t;
}

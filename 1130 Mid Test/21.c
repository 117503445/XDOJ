#include<stdio.h>
#define p(x) printf("%d",x)
int main(){
	int n;
	scanf("%d",&n);
	int i;
	double s=0;
	for(i=0;i<n;i++){
		double a;
		if(i==0){
			a=1;
		}else
		{
			a=i*(i+1);
		}
		int j;
		int y=0;
		for(j=0;j<i+2;j++){
			y+=j;
		}
		a/=y;
		s+=a;
	}
	printf("%.2lf",s);
	return 0;
}

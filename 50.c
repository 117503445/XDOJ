#include <stdio.h>
int main() {
	int n=0;
	scanf("%d",&n);
	int a[n];
	int j=0;	
	for	(j=0;j<n;j++){
	scanf("%d",&a[j]);
	}
	

int sum=0;
	for( j = 0; j<n;j++)
		sum+=a[j];
	printf("%.2f",(float)sum/j);
	return 0;
}

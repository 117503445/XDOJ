/* 
Coder:117503445
https://github.com/117503445/XDOJ
GNU GPLV3 
*/
#include <stdio.h>
int main()
{
	int r[] = {0, 0, 0, 1, 1, 1, 1, 6, 10, 11};
	while (1)
	{
		int a;
		scanf("%d", &a);
		if(a==0)break;
		printf("%d\n", r[a]);
	}
	return 0;
}
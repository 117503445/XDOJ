/* 
Coder:117503445
https://github.com/117503445/XDOJ
GNU GPLV3 
*/
#include <stdio.h>
int main()
{
	while (1)
	{
		int n;
		scanf("%d", &n);
		if (n == 0)
			break;
		printf("%d\n",(n-1)%9+1);
	}
	return 0;
}
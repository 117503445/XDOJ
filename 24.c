/* 
Coder:117503445
https://github.com/117503445/XDOJ
GNU GPLV3 
*/
#include <stdio.h>
int main()
{
	char a[100];
	int i, j;

	for (i = 0; i < 100; i++)
	{
		a[i] = 0;
	}

	scanf("%s", &a);
	int n = 0;
	for (i = 0; i < 100; i++)
	{
		if (a[i] != 0)
			n++;
	}
	char c;
	for (i = 0; i < n; i++)
	{
		//printf("H");
		if (a[i] >= 48 && a[i] <= 57)
		{

			if (a[i + 1] >= 48 && a[i + 1] <= 57)
			{
				int t = (a[i] - 48) * 10 + (a[i + 1] - 48);
				//printf("***%d***",t);
				for (j = 0; j < t; j++)
				{
					printf("%c", c);
				}
			}

			else
			{
				if (a[i - 1] < 48 || a[i - 1] > 57)
					for (j = 0; j < a[i] - 48; j++)
					{
						printf("%c", c);
					}
			}
		}

		else
		{
			if (i != n - 1 && (a[i + 1] < 48 || a[i + 1] > 57))
			{
				printf("%c", a[i]);
			}
			c = a[i];
		}
	}

	printf("\n");
	return 0;
}
//printf("%d",);
//scanf("%d",&);

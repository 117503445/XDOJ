#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{

	double sum = 0;
	int failNum = 0;
	int GoodNum = 0;

	for (int j = 0; j < 5; j++)
	{
		int a[4];
		int fail = 0;
		cin >> a[0] >> a[1] >> a[2] >> a[3];
		sum += a[0];

		int youxiu = 0;

		int currentSum = 0;
		int allOk = 1;

		for (int i = 0; i < 4; i++)
		{
			if (a[i] < 60)
				fail++;
			if (a[i] < 85)
				allOk = 0;
			currentSum += a[i];
		}

		youxiu = (currentSum >= 360) + allOk;

		if (fail >= 2)
		{
			failNum++;
		}
		if (youxiu > 0)
		{
			GoodNum++;
		}
	}
	printf("%.1lf %d %d", sum / 5, failNum, GoodNum);
	return 0;
}
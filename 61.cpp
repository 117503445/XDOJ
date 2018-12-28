#include <iostream>
using namespace std;
struct student
{
	int id;
	int t;
};
int main()
{
	int n;
	scanf("%d", &n);
	struct student s[100];
	int p = 0;
	for (int i = 0; i < n; i++)
	{
		int id, a, b, c, d;
		scanf("%d %d:%d %d:%d", &id, &a, &b, &c, &d);
		int t = c * 60 + d - 60 * a - b;
		bool r = false;
		for (int j = 0; j < p; j++)
		{
			if (s[j].id == id)
			{
				s[j].t += t;
				r = true;
				break;
			}
		}
		if (!r)
		{
			s[p].id = id;
			s[p].t = t;
			p++;
		}
	}
	for (int i = 0; i < p - 1; i++)
	{
		for (int j = 0; j < p - i - 1; j++)
		{
			if (s[j].t < s[j + 1].t)
			{
				swap(s[j].t, s[j + 1].t);
				swap(s[j].id, s[j + 1].id);
			}
			else if (s[j].t == s[j + 1].t)
			{
				if (s[j].id > s[j + 1].id)
				{
					swap(s[j].t, s[j + 1].t);
					swap(s[j].id, s[j + 1].id);
				}
			}
		}
	}
	for (int i = 0; i < p; i++)
	{
		cout << s[i].id << " " << s[i].t << endl;
	}
	return 0;
}

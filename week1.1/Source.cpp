#include<stdio.h>
int main()
{
	int m = 999999999;
	int M = -999999999;
	int a, n, i;
	scanf_s("%d", &n);
	for (i = 0;i < n;i++)
	{
		scanf_s("%d", &a);
		if (a < m)
		{
			m = a;
		}
		if (a > M)
		{
			M = a;
		}
	}
	printf("%d\n%d", m, M);
}
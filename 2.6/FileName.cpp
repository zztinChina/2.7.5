#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	scanf_s("%d%d", &m, &n);
	int a = 0;
	if (m > n)
	{
		a = m;
	}
	else
	{
		a = n;
	}
	int i = 0;
	for (i =a; i>0; i++)
	{
		if (i % m == 0 && i% n == 0)
		{
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}
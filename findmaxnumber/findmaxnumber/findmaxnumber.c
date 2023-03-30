#include <stdio.h>

int maxnum(int getarr[], int n)
{
	int max = getarr[0];
	int i;
	for (i = 1; i < n; i++)
	{
		if (getarr[i] > max)
		{
			max = getarr[i];
		}
	}
	return max;
}

void resultmaxnum()
{
	int getarr[] = { 1, 9, 3, 8, 13, 18, 20, 19 };
	int n = sizeof(getarr) / sizeof(getarr[0]);
	int max = maxnum(getarr, n);
	printf("max num: %d\n", max);
}

int main(void)
{
	resultmaxnum();
	return 0;
}



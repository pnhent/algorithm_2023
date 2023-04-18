#include<stdio.h>

void hanoi_top(int n, char from, char tmp, char to);

int main(void)
{
	hanoi_top(4, 'A', 'B', 'C');
}

void hanoi_top(int n, char from, char tmp, char to)
{
	if (n == 1)
		printf("1 circlepad %c to %c set.\n", from, to);
	else
	{
		hanoi_top(n - 1, from, to, tmp);
		printf("circlepad %d %c to %c set.\n", n, from, to);
		hanoi_top(n - 1, tmp, from, to);
	}
}
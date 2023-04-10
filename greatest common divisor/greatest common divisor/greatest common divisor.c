#define _CRT_SECURE_NO_WARNINGS
int a, b, bsav;
int Euclid(int a, int b);

#include <stdio.h>
int main(void)
{
	int num;
	printf("write two number");
	scanf("%d %d", &a, &b);
	num = Euclid(a, b);
	printf("greatest common divisor is %d , % d", num);
	return 0;

}

int Euclid(int a, int b) {

	if (a < b);
	return 0;

	int basv = 0;

	while (b!= 0) 
	{
		bsav = b;
		b = a % b;
		a = basv;
	}
	return a;

}
#include <stdio.h>

int main(void)
{
    int x = 10, y = 10;

    printf("%d\n", x);
    printf("++x�� ��=%d\n",++x);
    printf("%d\n\n", x);

    printf("%d\n", y);
    printf("y++�� ��=%d\n", y++);
    printf("%d\n", y);

    return 0;
}
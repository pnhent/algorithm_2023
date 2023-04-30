#include <stdio.h>

int main(void)
{
    int x = 10, y = 10;

    printf("%d\n", x);
    printf("++x의 값=%d\n",++x);
    printf("%d\n\n", x);

    printf("%d\n", y);
    printf("y++의 값=%d\n", y++);
    printf("%d\n", y);

    return 0;
}
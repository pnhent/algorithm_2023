#include <stdio.h>

int main(void)
{
    int x;
    int i = 1;

    printf("����ϰ� ���� ��: ");
    scanf("%d", &x);

    while(i <= 9)
    {
        printf("%d * %d = %d\n", x, i, x * i);
        i++;
    }

    return 0;
}
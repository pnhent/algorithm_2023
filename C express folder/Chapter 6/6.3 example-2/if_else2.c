#include <stdio.h>

int main(void)
{
    int x, y, result;

    printf("분자와 분모를 입력하시오: ");
    scanf("%d %d", &x, &y);

    if(y == 0)
    {
        printf("0으로 나눌 수 없습니다\n");
    }
    else
    {
        result = x / y;
        printf("%d / %d = %d입니다.\n", x, y, result);
    }

    return 0;
}
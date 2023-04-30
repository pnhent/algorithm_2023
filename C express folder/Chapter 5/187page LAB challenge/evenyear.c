#include <stdio.h>

int main(void)
{
    int year, result;

    printf("연도를 입력하시오 ");
    scanf("%d", &year);

    result = year % 2 == 0;
    printf("%d년은 %d입니다. \n", year, result);

    return 0;
}
#include <stdio.h>

int main(void)
{
    int year, result;

    printf("������ �Է��Ͻÿ� ");
    scanf("%d", &year);

    result = year % 2 == 0;
    printf("%d���� %d�Դϴ�. \n", year, result);

    return 0;
}
//문제: 100보다 작은 정수를 입력받아서 이것을 십의 자리, 일의 자리로 분리하여 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main(void)
{
    int num, num1, num2;

    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    num1 = num / 10;
    num2 = num % 10;

    printf("십의 자리: %d\n", num1);
    printf("일의 자리: %d\n", num2);

    return 0;
}
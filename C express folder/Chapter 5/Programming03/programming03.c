//문제: 3개의 정수값을 입력받아서, 3개의 정수값 중에서 최대값을 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main(void)
{
    int num1, num2, num3, max;

    printf("정수 3개를 입력하시오: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    max = num1 > num2 ? num1 : num2;
    max = num3 > max ? num3 : max;

    printf("최대값은 %d입니다.\n", max);
    
    return 0;
}
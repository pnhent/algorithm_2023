//문제: 사용자로부터 정수 x, y를 입력받아서  x<<y의 값을 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main(void)
{
    int x, y, z;

    printf("정수를 입력하시오: ");
    scanf("%d", &x);

    printf("2를 곱하고 싶은 횟수: ");
    scanf("%d", &y);

    z = x << y;

    printf("%d<<%d의 값: %d\n", x, y, z);

    return 0;
}
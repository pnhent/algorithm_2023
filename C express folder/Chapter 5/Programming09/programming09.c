//문제: AC와 AE, BC를 입력하여서 DE를 구하는 프로그램을 작성하시오. 탈레스의 피라미드 높이 구하는 문제이다.

#include <stdio.h>

int main(void)
{
    double ac ,ae, bc, de;

    printf("지팡이의 높이를 입력하시오: ");
    scanf("%lf", &bc);

    printf("지팡이 그림자의 길이를 입력하시오: ");
    scanf("%lf", &ac);

    printf("피라미드까지의 거리를 입력하시오: ");
    scanf("%lf", &ae);

    de = (ae * bc) / ac;
    printf("피라미드의 높이는 %.2lf입니다.\n", de);

    return 0;
}
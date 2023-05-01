//문제: 2개의 double 형의 실수를 읽어서 합, 차, 곱, 몫을 구하는 프로그램을 작성하시오.

#include <stdio.h>

int main(void)
{
    double num1, num2;
    double hap, cha, gop, mok;

    printf("실수를 입력하시오: ");
    scanf("%lf %lf", &num1, &num2);

    hap = num1 + num2;
    cha = num1 - num2;
    gop = num1 * num2;
    mok = num1 / num2;

    printf("%.2lf %.2lf %.2lf %.2lf\n", hap, cha, gop, mok);

    return 0;
}
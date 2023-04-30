//문제: 사용자로부터 질량(m)과 속도(v)를 받아서 운동에너지(E)를 계산하는 프로그램을 작성하시오. 모든 변수는 double형으로 사용할 것

#include <stdio.h>

int main(void)
{
    double m;
    double v;
    double e;

    printf("질량(kg): ");
    scanf("%lf", &m);

    printf("속도(m/s): ");
    scanf("%lf", &v);

    e = 0.5 * m * v * v;

    printf("운동에너지(J): %lf\n", e);

    return 0;
}
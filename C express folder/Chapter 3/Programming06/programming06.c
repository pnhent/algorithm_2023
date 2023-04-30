//문제 : 자신의 몸무게를 입력받아서 달에서 몸무게를 계산하는 프로그램을 작성하시오. double형으로 계산한다.

#include <stdio.h>

int main(void)
{
    double earth_weight;
    double moon_weight;

    printf("몸무게를 입력하시오(단위: kg): ");
    scanf("%lf", &earth_weight);

    moon_weight = earth_weight * 0.17;
    
    printf("달에서의 몸무게는 %.2lfkg입니다.\n", moon_weight);

    return 0;
}
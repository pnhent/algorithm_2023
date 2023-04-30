/*문제 : 연봉을 한 푼도 쓰지 않고 몇 년 동안 모아야 10억이 될까? 연봉을 입력하고, 10억을 연봉으로 나누어서 출력해보자. 
단 소수점 2자리까지만 출력한다*/

#include <stdio.h>

int main(void)
{
    double yearmoney;
    double earnmoney;

    printf("연봉을 입력하시오(단위: 만원): ");
    scanf("%lf", &yearmoney);

    earnmoney = 100000/yearmoney;
    printf("10억을 모으는데 걸리는 시간(단위: 년): %.2lf\n",earnmoney);

    return 0;
}
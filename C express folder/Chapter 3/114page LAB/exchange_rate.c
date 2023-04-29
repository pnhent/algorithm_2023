//문제 : 사용자가 입력하는 원화를 달러화로 계산하여 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main(void)
{
    double rate;
    double usd;
    int krw;

    printf("환율을 입력하시오: ");
    scanf("%lf",&rate);

    printf("원화 금액을 입력하시오: ");
    scanf("%d", &krw);

    usd = krw / rate;
    printf("원화 %d원은 %lf달러입니다.\n", krw, usd);

    return 0;
}
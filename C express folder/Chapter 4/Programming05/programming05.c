/*문제: 우리나라에서 많이 사용되는 면적의 단위인 평을 제곱미터로 환산하는 프로그램을 작성하시오. 여기서 1평은 3.3m제곱이다. 
기호 상수를 이용하여 1평당 제곱미터를 나타낼 것*/

#include <stdio.h>
#define meterpeung 3.3058

int main(void)
{
    double peung;
    double sum;

    printf("평을 입력하시오: ");
    scanf("%lf", &peung);

    sum = peung * meterpeung;

    printf("%lf평방미터입니다.\n", sum);
    return 0;
}
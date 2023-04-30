#include <stdio.h>

int main(void)
{
    double whassi;
    double ssupsi;

    printf("화씨온도를 입력하시오: ");
    scanf("%lf", &whassi);

    ssupsi = 5.0 / 9.0 * (whassi - 32.0);
    printf("섭씨온도는 %lf입니다 \n", ssupsi);

    return 0;
}
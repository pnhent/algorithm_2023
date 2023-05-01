#include <stdio.h>

int main(void)
{
    double whassi;
    double ssupsi;

    printf("화씨온도를 입력하시오: ");
    scanf("%lf", &whassi);

    ssupsi = ((double)5 / 9) * (whassi - 32);
    printf("섭씨온도는 %lf입니다. \n", ssupsi);

    return 0;
}
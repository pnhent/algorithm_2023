//문제 : 화씨 온도를 입력받아 섭씨온도로 환산하여 출력하는 프로그램을 작성하시오. 온도는 실수형으로 처리한다.

#include <stdio.h>

int main(void)
{
    double whaci;
    double ssupsi;

    printf("화씨값을 입력하시오: ");
    scanf("%lf", &whaci);

    ssupsi = (5.0/9.0)*(whaci-32.0);
    printf("섭씨의 값은 %.2lf도 입니다.\n", ssupsi);

    return 0;
}
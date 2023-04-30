/*문제 : 마일을 미터로 환산하는 프로그램을 작성하시오. 사용자로부터 마일단위로 거리를 입력받고 마일에 1609를 곱하여 미터로 변환한다. 
미터로 변환된 값을 화면에 출력하고 실수값으로 저장한다.*/

#include <stdio.h>

int main(void)
{
    double mile;
    float meter;

    printf("마일을 입력하시오: ");
    scanf("%lf", &mile);

    meter = mile * 1609.0;
    printf("%.1lf 마일은 %.2f미터입니다.\n",mile, meter);

    return 0;
}

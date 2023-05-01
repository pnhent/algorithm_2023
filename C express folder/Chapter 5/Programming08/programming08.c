//문제: 구의 표면적과 체면적을 구하는 프로그램을 작성하시오. 구의 반지름은 실수로 입력되고 파이는 기호상수를 사용할 것.

#include <stdio.h>
#define pi 3.141592

int main(void)
{
    double radius, peoarea, chearea;

    printf("구의 반지름을 입력하시오: ");
    scanf("%lf", &radius);

    peoarea = 4 * pi * (radius * radius);
    printf("표면적은 %.2lf입니다.\n", peoarea);

    chearea = (4.0/3.0) * pi * (radius * radius * radius);
    printf("체적은 %.2lf입니다.\n", chearea);

    return 0;
}
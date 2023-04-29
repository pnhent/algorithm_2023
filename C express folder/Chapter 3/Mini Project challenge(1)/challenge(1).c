//문제 : 한 번의 printf 호출로 변수 meter와 area의 값이 동시에 출력되도록 변경하라.

#include <stdio.h>

int main(void)
{
    double w, h, area, meter;

    w = 10.0;
    h = 5.0;
    area = w*h;
    meter = 2*(w+h);

    printf("사각형의 넓이: %lf, 사각형의 둘레: %lf\n", area, meter);

    return 0;
}

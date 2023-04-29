//문제 : w와 h의 값을 사용자로부터 받도록 변경하여보자. %lf를 사용한다.

#include <stdio.h>

int main(void)
{
    double w, h, area, meter;

    printf("직사각형의 가로: ");
    scanf("%lf", &w);

    printf("직사각형의 세로: ");
    scanf("%lf", &h);

    area = w*h;
    meter = 2*(w+h);

    printf("사각형의 넓이: %lf\n", area);
    printf("사각형의 둘레: %lf\n", meter);

    return 0;
}
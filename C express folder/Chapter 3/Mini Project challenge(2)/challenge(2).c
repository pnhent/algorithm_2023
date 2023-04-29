//문제 : w와 h의 변수는 선언하면서 초기화 해보자.

#include <stdio.h>

int main(void)
{
    double w = 10.0;
    double h = 5.0;
    double area, meter;
    
    area = w*h;
    meter = 2*(w+h);

    printf("사각형의 넓이: %lf, 사각형의 둘레: %lf\n", area, meter);

    return 0;
}

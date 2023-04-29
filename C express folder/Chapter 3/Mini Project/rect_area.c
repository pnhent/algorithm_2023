/*문제 : 직사각형의 둘레와 면적을 구하는 프로그램을 작성하시오. 직사각형의 가로와 세로를 각각 w와 h라고 하면 직사각형의 
면적은 w*h가 되고 둘레는 2*(w+h)가 된다.*/

#include <stdio.h>

int main(void)
{
    double w, h, area, meter;

    w = 10.0;
    h = 5.0;
    area = w*h;
    meter = 2*(w+h);

    printf("사각형의 넓이: %lf\n", area);
    printf("사각형의 둘레: %lf\n", meter);

    return 0;
}


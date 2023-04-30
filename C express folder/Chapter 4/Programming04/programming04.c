//상자의 부피를 구하는 프로그램을 작성하시오. 부피는 길이*너비*높이로 계산한다. 길이, 너비, 높이는 모두 double형의 실수로 입력받는다.

#include <stdio.h>

int main(void)
{
    double garo;
    double sero;
    double nopi;
    double bupi;

    printf("상자의 가로 세로 높이르 한번에 입력: ");
    scanf("%lf %lf %lf", &garo, &sero, &nopi);

    bupi = garo * sero * nopi;

    printf("상자의 부피는 %lf입니다.\n", bupi);
    return 0;
}
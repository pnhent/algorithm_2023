/*문제 : 다향식 3*X*X + 7*X + 11의 값을 게싼하는 프로그램을 작성하시오. X의 값은 실수로 사용자에게 입력받는다.*/

#include <stdio.h>

int main(void)
{
    double X;
    double sum;

    printf("실수를 입력하시오: ");
    scanf("%lf", &X);

    sum = (3 * (X * X)) + (7 * X) + 11;

    printf("다항식의 값은 %.2lf\n", sum);

    return 0;  
}
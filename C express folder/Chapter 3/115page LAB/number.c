//문제 : 사용자로부터 세 개의 double형의 실수를 입력받은 후, 합계와 평균값을 계산하여 화면에 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main(void)
{
    double num1, num2, num3;
    double sum, average;

    printf("3개의 실수를 입력하시오: ");
    scanf("%lf %lf %lf",&num1, &num2, &num3);

    sum = num1 + num2 + num3;
    average = sum / 3.0;

    printf("합계= %.2lf\n", sum);
    printf("평균= %.2lf\n", average);

    return 0;
}

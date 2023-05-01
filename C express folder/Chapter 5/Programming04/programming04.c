//문제: cm로 표현된 키를 입력하여 피트와 인치로 변환하는 프로그램을 작성하시오. 1피트는 12인치이고 1인치는 2.54cm이다.

#include <stdio.h>

int main(void)
{
    int cm, feet;
    double inch;

    printf("키를 입력하시오(cm): ");
    scanf("%d", &cm);

    feet = cm / (12 * 2.54);
    inch = (cm - feet * 12 * 2.54) / 2.54;
    printf("%dcm는 %d피트 %.2f인치입니다.\n", cm, feet, inch);

    return 0;
}
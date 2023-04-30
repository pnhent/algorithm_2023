/*문제 : 사용자로부터 하나의 실수를 입력받아서 소수점 표기 방법과 지수 표기 방법으로 동시에 출력하는 프로그램을 작성하시오.*/

#include <stdio.h>

int main(void)
{
    double x;

    printf("실수를 입력하시오: ");
    scanf("%lf", &x);
    printf("실수형식으로는 %lf입니다\n", x);
    printf("지수형식으로는 %e입니다\n", x);
    
    return 0;
}
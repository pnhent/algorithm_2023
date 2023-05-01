//문제: (1.0-0.9)==0.1의 값의 출력값이 1이 나오도록 코드를 작성하시오.

#include <stdio.h>
#include <math.h>

int main(void)
{
    double num1, num2;
    num1 = 1.0 - 0.9;
    num2 = 0.1;
    printf("(1.0-0.9)==0.1은 %d입니다.\n",fabs(num1-num2) < 0.000001);

    return 0;
}
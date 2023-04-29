//문제 : 변수 x와 y에 20과 10을 저장하고 x+y, x-y, x*y, x/y을 계산하여 변수에 저장하고 이들 변수를 화면에 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main(void)
{
    int x;
    int y;
    int plus,minus,divid,add;

    x = 20;
    y = 10;

    plus = x + y;
    minus = x - y;
    add = x * y;
    divid = x / y;

    printf("두 수의 합: %d\n",plus);
    printf("두 수의 차: %d\n",minus);
    printf("두 수의 곱: %d\n",add);
    printf("두 수의 몫: %d\n",divid);

    return 0;
}
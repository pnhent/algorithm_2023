//문제 : int형의 변수 x와 y의 값을 서로 교환하는 프로그램을 작성하시오. x와 y는 10, 20의 값으로 초기화하고 별도의 변수가 필요하면 사용한다.

#include <stdio.h>

int main(void)
{
    int x = 10;
    int y = 20;
    int tmp;
    printf("x=%d y=%d\n", x, y);
    tmp = x;
    x = y;
    y = tmp;
    printf("x= %d y= %d\n", x,y);
    return 0;
}
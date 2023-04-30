//문제: i를 -1로 초기화한 후에 %x를 사용하여 출력하시오. -2, -3으로 초기화해서 2의 보수인지 확인하시오.

#include <stdio.h>

int main(void)
{
    int i1 = -1;
    int i2 = -2;
    int i3 = -3;

    printf("%x\n", i1);
    printf("%x\n", i2);
    printf("%x\n", i3);

    return 0;
}
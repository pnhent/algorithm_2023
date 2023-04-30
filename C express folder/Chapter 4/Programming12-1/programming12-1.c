//문제: i의 값을 형식 지정자 %o, %x를 사용하여 8진수, 16진수로도 출력하시오.

#include <stdio.h>

int main(void)
{
    int i = 255;
    printf("%d\n", i);
    printf("%x\n", i);
    printf("%o\n", i);

    return 0;
}
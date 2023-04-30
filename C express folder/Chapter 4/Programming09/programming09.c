//문제: 'a'+1, 'a'+2, 'a'+3을 문자 형식(%c)으로 출력하는 프로그램을 작성하시오. 

#include <stdio.h>

int main(void)
{
    char num1;
    char num2;
    char num3;

    num1 = 'a' + 1;
    num2 = 'a' + 2;
    num3 = 'a' + 3;

    printf("%c %c %c\n", num1, num2, num3);

    return 0;
}
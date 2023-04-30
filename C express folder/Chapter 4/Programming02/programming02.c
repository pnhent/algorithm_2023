//문제 : 사용자로부터 정수를 16진수로 입력받아 8진수, 10진수, 16진수 형태로 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main(void)
{
    int x;
    
    printf("16진수 정수를 입력하시오: ");
    scanf("%x", &x);
    
    printf("8진수로는 %#o\n", x);
    printf("10진수로는 %d\n", x);
    printf("16진수로는 %#x\n", x);

    return 0;
}
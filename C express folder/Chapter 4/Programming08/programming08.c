//문제: 사용자가 아스키 코드값을 입력하면 그 아스키 코드값에 해당하는 문자를 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main(void)
{
    int ascii;
    char munja;

    printf("아스키 코드값을 입력하시오: ");
    scanf("%d", &ascii);

    munja = ascii;

    printf("문자:%c입니다\n", munja);
    
    return 0;
}
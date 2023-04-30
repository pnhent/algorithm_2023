//문제: 경보음이 울린 후에 화재가 발생하였습니다를 출력하고 다시 경보음이 울리는 프로그램을 작성하시오.

#include <stdio.h>

int main(void)
{
    char beep = '\a';
    printf("%c", beep);
    printf("화재가 발생하였습니다.");
    printf("%c", beep);

    return 0;
}

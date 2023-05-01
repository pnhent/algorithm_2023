//문제: 사용자로부터 2개의 정수를 입력받아서 첫 번째 정수를 나누었을 때 얻게 되는 몫과 나머지를 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main(void)
{
    int a, b;
    int mok, namogi;

    printf("정수 2개를 입력하시오: ");
    scanf("%d %d", &a, &b);

    mok = a / b;
    namogi = a % b;

    printf("몫: %d\n", mok);
    printf("나머지: %d\n", namogi);

    return 0;
}
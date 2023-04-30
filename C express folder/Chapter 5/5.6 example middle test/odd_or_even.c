#include <stdio.h>

int main(void)
{
    int x;
    int even = 1; 
    int odd = 0;

    printf("정수를 입력하시오: ");
    scanf("%d", &x);

    (x % 2 == 0) ? printf("짝수입니다\n") : printf("홀수입니다\n");
    return 0;
}
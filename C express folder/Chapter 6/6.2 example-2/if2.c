#include <stdio.h>

int main(void)
{
    int num;

    printf("숫자를 입력하시오: ");
    scanf("%d", &num);

    if(num < 0)
        num = -num;
    
    printf("절대값은 %d입니다\n", num);

    return 0;
}
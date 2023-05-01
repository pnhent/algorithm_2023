#include <stdio.h>

int main(void)
{
    int num;

    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    if(num >= 100)
    {
        printf("large\n");
    }
    else
    {
        printf("small\n");
    }
    
    return 0;
}
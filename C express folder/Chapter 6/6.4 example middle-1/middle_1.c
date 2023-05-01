#include <stdio.h>

int main(void)
{
    int n;

    printf("n의 값을 입력하시오: ");
    scanf("%d", &n);

    if(n == 0)
        printf("A\n");
    else if(n > 3)
        printf("B\n");
    else
        printf("C\n");
    
    return 0;
}
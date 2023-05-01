#include <stdio.h>

int main(void)
{
    int size;

    printf("컵의 사이즈를 입력하시오: ");
    scanf("%d", &size);

    if(size <= 100)
        printf("small\n");
    else if(size > 100 && size <= 200)
        printf("medium\n");
    else if(size > 200)
        printf("large\n");
    
    return 0;
}
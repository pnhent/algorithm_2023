#include <stdio.h>

int main(void)
{
    int num;

    printf("������ �Է��ϼ���: ");
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
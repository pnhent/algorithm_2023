#include <stdio.h>

int main(void)
{
    int size;

    printf("���� ����� �Է��Ͻÿ�: ");
    scanf("%d", &size);

    if(size <= 100)
        printf("small\n");
    else if(size > 100 && size <= 200)
        printf("medium\n");
    else if(size > 200)
        printf("large\n");
    
    return 0;
}
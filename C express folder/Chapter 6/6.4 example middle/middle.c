#include <stdio.h>

int main(void)
{
    int n;

    printf("n�� ���� �Է��Ͻÿ�: ");
    scanf("%d", &n);

    if(n == 0)
        printf("A\n");
    else if(n > 3)
        printf("B\n");
    else
        printf("C\n");
    
    return 0;
}
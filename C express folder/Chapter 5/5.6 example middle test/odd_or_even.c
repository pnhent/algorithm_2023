#include <stdio.h>

int main(void)
{
    int x;
    int even = 1; 
    int odd = 0;

    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &x);

    (x % 2 == 0) ? printf("¦���Դϴ�\n") : printf("Ȧ���Դϴ�\n");
    return 0;
}
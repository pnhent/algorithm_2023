#include <stdio.h>

int main(void)
{
    int x, y, result;

    printf("���ڿ� �и� �Է��Ͻÿ�: ");
    scanf("%d %d", &x, &y);

    if(y == 0)
    {
        printf("0���� ���� �� �����ϴ�\n");
    }
    else
    {
        result = x / y;
        printf("%d / %d = %d�Դϴ�.\n", x, y, result);
    }

    return 0;
}
//����: ����ڷκ��� ���� x, y�� �Է¹޾Ƽ�  x<<y�� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>

int main(void)
{
    int x, y, z;

    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &x);

    printf("2�� ���ϰ� ���� Ƚ��: ");
    scanf("%d", &y);

    z = x << y;

    printf("%d<<%d�� ��: %d\n", x, y, z);

    return 0;
}
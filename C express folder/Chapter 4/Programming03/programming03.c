//���� : int���� ���� x�� y�� ���� ���� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�. x�� y�� 10, 20�� ������ �ʱ�ȭ�ϰ� ������ ������ �ʿ��ϸ� ����Ѵ�.

#include <stdio.h>

int main(void)
{
    int x = 10;
    int y = 20;
    int tmp;
    printf("x=%d y=%d\n", x, y);
    tmp = x;
    x = y;
    y = tmp;
    printf("x= %d y= %d\n", x,y);
    return 0;
}
//���� : ���� x�� y�� 20�� 10�� �����ϰ� x+y, x-y, x*y, x/y�� ����Ͽ� ������ �����ϰ� �̵� ������ ȭ�鿡 ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>

int main(void)
{
    int x;
    int y;
    int plus,minus,divid,add;

    x = 20;
    y = 10;

    plus = x + y;
    minus = x - y;
    add = x * y;
    divid = x / y;

    printf("�� ���� ��: %d\n",plus);
    printf("�� ���� ��: %d\n",minus);
    printf("�� ���� ��: %d\n",add);
    printf("�� ���� ��: %d\n",divid);

    return 0;
}
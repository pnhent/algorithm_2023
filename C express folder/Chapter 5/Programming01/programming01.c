//����: ����ڷκ��� 2���� ������ �Է¹޾Ƽ� ù ��° ������ �������� �� ��� �Ǵ� ��� �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>

int main(void)
{
    int a, b;
    int mok, namogi;

    printf("���� 2���� �Է��Ͻÿ�: ");
    scanf("%d %d", &a, &b);

    mok = a / b;
    namogi = a % b;

    printf("��: %d\n", mok);
    printf("������: %d\n", namogi);

    return 0;
}
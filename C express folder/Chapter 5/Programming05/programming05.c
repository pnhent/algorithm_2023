//����: 100���� ���� ������ �Է¹޾Ƽ� �̰��� ���� �ڸ�, ���� �ڸ��� �и��Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>

int main(void)
{
    int num, num1, num2;

    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &num);

    num1 = num / 10;
    num2 = num % 10;

    printf("���� �ڸ�: %d\n", num1);
    printf("���� �ڸ�: %d\n", num2);

    return 0;
}
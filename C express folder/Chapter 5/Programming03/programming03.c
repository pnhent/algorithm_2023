//����: 3���� �������� �Է¹޾Ƽ�, 3���� ������ �߿��� �ִ밪�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>

int main(void)
{
    int num1, num2, num3, max;

    printf("���� 3���� �Է��Ͻÿ�: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    max = num1 > num2 ? num1 : num2;
    max = num3 > max ? num3 : max;

    printf("�ִ밪�� %d�Դϴ�.\n", max);
    
    return 0;
}
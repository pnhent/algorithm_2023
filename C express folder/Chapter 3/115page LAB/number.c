//���� : ����ڷκ��� �� ���� double���� �Ǽ��� �Է¹��� ��, �հ�� ��հ��� ����Ͽ� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>

int main(void)
{
    double num1, num2, num3;
    double sum, average;

    printf("3���� �Ǽ��� �Է��Ͻÿ�: ");
    scanf("%lf %lf %lf",&num1, &num2, &num3);

    sum = num1 + num2 + num3;
    average = sum / 3.0;

    printf("�հ�= %.2lf\n", sum);
    printf("���= %.2lf\n", average);

    return 0;
}

//����: 2���� double ���� �Ǽ��� �о ��, ��, ��, ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>

int main(void)
{
    double num1, num2;
    double hap, cha, gop, mok;

    printf("�Ǽ��� �Է��Ͻÿ�: ");
    scanf("%lf %lf", &num1, &num2);

    hap = num1 + num2;
    cha = num1 - num2;
    gop = num1 * num2;
    mok = num1 / num2;

    printf("%.2lf %.2lf %.2lf %.2lf\n", hap, cha, gop, mok);

    return 0;
}
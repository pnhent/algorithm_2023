//����: AC�� AE, BC�� �Է��Ͽ��� DE�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. Ż������ �Ƕ�̵� ���� ���ϴ� �����̴�.

#include <stdio.h>

int main(void)
{
    double ac ,ae, bc, de;

    printf("�������� ���̸� �Է��Ͻÿ�: ");
    scanf("%lf", &bc);

    printf("������ �׸����� ���̸� �Է��Ͻÿ�: ");
    scanf("%lf", &ac);

    printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ�: ");
    scanf("%lf", &ae);

    de = (ae * bc) / ac;
    printf("�Ƕ�̵��� ���̴� %.2lf�Դϴ�.\n", de);

    return 0;
}
//����: ���� ǥ������ ü������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ���� �������� �Ǽ��� �Էµǰ� ���̴� ��ȣ����� ����� ��.

#include <stdio.h>
#define pi 3.141592

int main(void)
{
    double radius, peoarea, chearea;

    printf("���� �������� �Է��Ͻÿ�: ");
    scanf("%lf", &radius);

    peoarea = 4 * pi * (radius * radius);
    printf("ǥ������ %.2lf�Դϴ�.\n", peoarea);

    chearea = (4.0/3.0) * pi * (radius * radius * radius);
    printf("ü���� %.2lf�Դϴ�.\n", chearea);

    return 0;
}
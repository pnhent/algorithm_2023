//���� : w�� h�� ���� ����ڷκ��� �޵��� �����Ͽ�����. %lf�� ����Ѵ�.

#include <stdio.h>

int main(void)
{
    double w, h, area, meter;

    printf("���簢���� ����: ");
    scanf("%lf", &w);

    printf("���簢���� ����: ");
    scanf("%lf", &h);

    area = w*h;
    meter = 2*(w+h);

    printf("�簢���� ����: %lf\n", area);
    printf("�簢���� �ѷ�: %lf\n", meter);

    return 0;
}
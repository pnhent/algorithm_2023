//���� : �� ���� printf ȣ��� ���� meter�� area�� ���� ���ÿ� ��µǵ��� �����϶�.

#include <stdio.h>

int main(void)
{
    double w, h, area, meter;

    w = 10.0;
    h = 5.0;
    area = w*h;
    meter = 2*(w+h);

    printf("�簢���� ����: %lf, �簢���� �ѷ�: %lf\n", area, meter);

    return 0;
}

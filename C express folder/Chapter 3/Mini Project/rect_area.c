/*���� : ���簢���� �ѷ��� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ���簢���� ���ο� ���θ� ���� w�� h��� �ϸ� ���簢���� 
������ w*h�� �ǰ� �ѷ��� 2*(w+h)�� �ȴ�.*/

#include <stdio.h>

int main(void)
{
    double w, h, area, meter;

    w = 10.0;
    h = 5.0;
    area = w*h;
    meter = 2*(w+h);

    printf("�簢���� ����: %lf\n", area);
    printf("�簢���� �ѷ�: %lf\n", meter);

    return 0;
}


//����: ����ڷκ��� ����(m)�� �ӵ�(v)�� �޾Ƽ� �������(E)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ��� ������ double������ ����� ��

#include <stdio.h>

int main(void)
{
    double m;
    double v;
    double e;

    printf("����(kg): ");
    scanf("%lf", &m);

    printf("�ӵ�(m/s): ");
    scanf("%lf", &v);

    e = 0.5 * m * v * v;

    printf("�������(J): %lf\n", e);

    return 0;
}
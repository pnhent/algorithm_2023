//���� : �ڽ��� �����Ը� �Է¹޾Ƽ� �޿��� �����Ը� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. double������ ����Ѵ�.

#include <stdio.h>

int main(void)
{
    double earth_weight;
    double moon_weight;

    printf("�����Ը� �Է��Ͻÿ�(����: kg): ");
    scanf("%lf", &earth_weight);

    moon_weight = earth_weight * 0.17;
    
    printf("�޿����� �����Դ� %.2lfkg�Դϴ�.\n", moon_weight);

    return 0;
}
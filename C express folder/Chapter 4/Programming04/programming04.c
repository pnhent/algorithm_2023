//������ ���Ǹ� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ���Ǵ� ����*�ʺ�*���̷� ����Ѵ�. ����, �ʺ�, ���̴� ��� double���� �Ǽ��� �Է¹޴´�.

#include <stdio.h>

int main(void)
{
    double garo;
    double sero;
    double nopi;
    double bupi;

    printf("������ ���� ���� ���̸� �ѹ��� �Է�: ");
    scanf("%lf %lf %lf", &garo, &sero, &nopi);

    bupi = garo * sero * nopi;

    printf("������ ���Ǵ� %lf�Դϴ�.\n", bupi);
    return 0;
}
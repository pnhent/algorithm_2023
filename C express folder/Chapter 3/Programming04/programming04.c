//���� : ȭ�� �µ��� �Է¹޾� �����µ��� ȯ���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �µ��� �Ǽ������� ó���Ѵ�.

#include <stdio.h>

int main(void)
{
    double whaci;
    double ssupsi;

    printf("ȭ������ �Է��Ͻÿ�: ");
    scanf("%lf", &whaci);

    ssupsi = (5.0/9.0)*(whaci-32.0);
    printf("������ ���� %.2lf�� �Դϴ�.\n", ssupsi);

    return 0;
}
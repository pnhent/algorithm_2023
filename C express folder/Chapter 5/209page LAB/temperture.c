#include <stdio.h>

int main(void)
{
    double whassi;
    double ssupsi;

    printf("ȭ���µ��� �Է��Ͻÿ�: ");
    scanf("%lf", &whassi);

    ssupsi = 5.0 / 9.0 * (whassi - 32.0);
    printf("�����µ��� %lf�Դϴ� \n", ssupsi);

    return 0;
}
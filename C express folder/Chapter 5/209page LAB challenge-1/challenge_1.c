#include <stdio.h>

int main(void)
{
    double ssupsi;
    double whassi;

    printf("ȭ���µ��� �Է��Ͻÿ�: ");
    scanf("%lf", &whassi);

    ssupsi = ((double)5 /(double)9 ) * (whassi - 32);
    printf("�����µ��� %lf�Դϴ�.\n",ssupsi);

    return 0;
}
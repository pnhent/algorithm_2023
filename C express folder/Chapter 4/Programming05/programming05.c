/*����: �츮���󿡼� ���� ���Ǵ� ������ ������ ���� �������ͷ� ȯ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ���⼭ 1���� 3.3m�����̴�. 
��ȣ ����� �̿��Ͽ� 1��� �������͸� ��Ÿ�� ��*/

#include <stdio.h>
#define meterpeung 3.3058

int main(void)
{
    double peung;
    double sum;

    printf("���� �Է��Ͻÿ�: ");
    scanf("%lf", &peung);

    sum = peung * meterpeung;

    printf("%lf�������Դϴ�.\n", sum);
    return 0;
}
/*���� : ������ ���ͷ� ȯ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ����ڷκ��� ���ϴ����� �Ÿ��� �Է¹ް� ���Ͽ� 1609�� ���Ͽ� ���ͷ� ��ȯ�Ѵ�. 
���ͷ� ��ȯ�� ���� ȭ�鿡 ����ϰ� �Ǽ������� �����Ѵ�.*/

#include <stdio.h>

int main(void)
{
    double mile;
    float meter;

    printf("������ �Է��Ͻÿ�: ");
    scanf("%lf", &mile);

    meter = mile * 1609.0;
    printf("%.1lf ������ %.2f�����Դϴ�.\n",mile, meter);

    return 0;
}

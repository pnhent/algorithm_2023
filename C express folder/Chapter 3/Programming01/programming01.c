/*���� : ������ �� Ǭ�� ���� �ʰ� �� �� ���� ��ƾ� 10���� �ɱ�? ������ �Է��ϰ�, 10���� �������� ����� ����غ���. 
�� �Ҽ��� 2�ڸ������� ����Ѵ�*/

#include <stdio.h>

int main(void)
{
    double yearmoney;
    double earnmoney;

    printf("������ �Է��Ͻÿ�(����: ����): ");
    scanf("%lf", &yearmoney);

    earnmoney = 100000/yearmoney;
    printf("10���� �����µ� �ɸ��� �ð�(����: ��): %.2lf\n",earnmoney);

    return 0;
}
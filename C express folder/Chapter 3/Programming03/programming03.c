/*���� : ����ڷκ��� �ﰢ���� ���̿� �غ��� �޾Ƽ� ���̸� ����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
��� �����ʹ� �Ǽ��� �ԷµǸ� ��µ� ��� �Ǽ������� �Ѵ�.*/

#include <stdio.h>

int main(void)
{
    double base;
    double heigh;
    double area;

    printf("�ﰢ���� �غ�: ");
    scanf("%lf", &base);
    printf("�ﰢ���� ����: ");
    scanf("%lf", &heigh);

    area = 0.5*heigh*base;
    printf("�ﰢ���� ����: %.2lf\n",area);

    return 0;
}
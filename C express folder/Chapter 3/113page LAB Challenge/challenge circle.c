//���� : ���� �ѷ��� ����Ͽ� ����ϵ��� ���α׷��� �����Ͽ�����.

#include <stdio.h>

int main(void)
{
    float radius; //������
    float circlearea; //���� �ѷ�

    printf("�������� �Է��ϼ���: ");
    scanf("%f", &radius);
    
    circlearea = 2 * 3.14 * radius; //���� �ѷ� ���ϴ� ����
    printf("���� �ѷ�: %f", circlearea);

    return 0;
}
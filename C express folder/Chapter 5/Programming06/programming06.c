//����: (1.0-0.9)==0.1�� ���� ��°��� 1�� �������� �ڵ带 �ۼ��Ͻÿ�.

#include <stdio.h>
#include <math.h>

int main(void)
{
    double num1, num2;
    num1 = 1.0 - 0.9;
    num2 = 0.1;
    printf("(1.0-0.9)==0.1�� %d�Դϴ�.\n",fabs(num1-num2) < 0.000001);

    return 0;
}
/*���� : ����� 3*X*X + 7*X + 11�� ���� �Խ��ϴ� ���α׷��� �ۼ��Ͻÿ�. X�� ���� �Ǽ��� ����ڿ��� �Է¹޴´�.*/

#include <stdio.h>

int main(void)
{
    double X;
    double sum;

    printf("�Ǽ��� �Է��Ͻÿ�: ");
    scanf("%lf", &X);

    sum = (3 * (X * X)) + (7 * X) + 11;

    printf("���׽��� ���� %.2lf\n", sum);

    return 0;  
}
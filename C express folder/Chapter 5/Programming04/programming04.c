//����: cm�� ǥ���� Ű�� �Է��Ͽ� ��Ʈ�� ��ġ�� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�. 1��Ʈ�� 12��ġ�̰� 1��ġ�� 2.54cm�̴�.

#include <stdio.h>

int main(void)
{
    int cm, feet;
    double inch;

    printf("Ű�� �Է��Ͻÿ�(cm): ");
    scanf("%d", &cm);

    feet = cm / (12 * 2.54);
    inch = (cm - feet * 12 * 2.54) / 2.54;
    printf("%dcm�� %d��Ʈ %.2f��ġ�Դϴ�.\n", cm, feet, inch);

    return 0;
}
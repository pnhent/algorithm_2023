#include <stdio.h>

int main(void)
{
    double sun = 300000;
    double distance = 194600000;
    double time;
    time = distance / sun;

    printf("���� �ӵ��� %lfkm/s\n", sun);
    printf("�¾�� �������� �Ÿ� %lfkm\n", distance);
    printf("���� �ð��� %lf��\n", time);

    return 0;
}
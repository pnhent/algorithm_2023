#include <stdio.h>

int main(void)
{
    double sun = 300000;
    double distance = 194600000;
    double time;
    int minutes;
    time = distance / sun;
    minutes = time / 60;

    printf("���� �ӵ��� %lfkm/s\n", sun);
    printf("�¾�� �������� �Ÿ� %lfkm\n", distance);
    printf("���� �ð��� %lf��\n", time);
    printf("���� �ð��� %d��\n", minutes);

    return 0;
}
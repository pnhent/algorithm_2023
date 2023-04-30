#include <stdio.h>

int main(void)
{
    double sun = 300000;
    double distance = 194600000;
    double time;
    int minutes;
    time = distance / sun;
    minutes = time / 60;

    printf("빛의 속도는 %lfkm/s\n", sun);
    printf("태양과 지구와의 거리 %lfkm\n", distance);
    printf("도달 시간은 %lf초\n", time);
    printf("도달 시간은 %d분\n", minutes);

    return 0;
}
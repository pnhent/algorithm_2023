#include <stdio.h>

int main(void)
{
    double sun = 300000;
    double distance = 194600000;
    double time;
    time = distance / sun;

    printf("빛의 속도는 %lfkm/s\n", sun);
    printf("태양과 지구와의 거리 %lfkm\n", distance);
    printf("도달 시간은 %lf초\n", time);

    return 0;
}
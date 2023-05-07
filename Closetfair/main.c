#include "Closet.h"
#include <time.h>

static void checktime(void(*func)(void));          //�ð� üũ

int main(int argc, const char* argv[]) {
    checktime(TC1_TwoPoint);
    checktime(TC2_TenPoint);
    checktime(TC3_OddPoint);
    checktime(TC4_Hunnitpoint);
    return 0;
}

void checktime(void(*func)(void))   //����ð� üũ
{
    clock_t start, finish;
    double duration;
    start = clock();
    (*func)();
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    printf("\n================%lf���Դϴ�.================\n", duration);
}
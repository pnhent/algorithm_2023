#include <stdio.h>
#include "euclid.h"
#include <time.h>
#include <stdlib.h>

int main() {
    // 테스트 횟수 설정
    int count = 10000000;

    // 테스트 함수 호출
    test_euclid(count);

    return 0;
}
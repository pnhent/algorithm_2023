#include <stdio.h>
#include "euclid.h"
#include <time.h>
#include<stdlib.h>

// 테스트 함수
int test_euclid(int count) {
    int i;
    int a, b, result1, result2;

    // 시간 측정을 위한 변수
    clock_t start_time, end_time;
    double recursive_time = 0.0; // 재귀적 방법으로 소요된 시간
    double iterative_time = 0.0; // 반복적인 방법으로 소요된 시간

    // count 횟수만큼 루프를 돌면서 테스트 진행
    for (i = 0; i < count; i++) {
        // 1~100000000 범위의 임의의 두 수 생성
        a = rand() % 100000000 + 1;
        b = rand() % 100000000 + 1;

        // 재귀적 방법으로 최대공약수 계산 및 실행 시간 측정
        start_time = clock(); // 시작 시간 측정
        result1 = euclidRecursive(a, b); // 재귀적 방법으로 최대공약수 계산
        end_time = clock(); // 종료 시간 측정
        recursive_time += (double)(end_time - start_time) / CLOCKS_PER_SEC; // 실행 시간 누적

        // 반복적 방법으로 최대공약수 계산 및 실행 시간 측정
        start_time = clock(); // 시작 시간 측정
        result2 = euclidRepeatative(a, b); // 반복적 방법으로 최대공약수 계산
        end_time = clock(); // 종료 시간 측정
        iterative_time += (double)(end_time - start_time) / CLOCKS_PER_SEC; // 실행 시간 누적

        // 실행시간 출력 및 최대공약수
        printf("a = %d, b = %d, GCD = %d, Recursive time = %f, Iterative time = %f\n", a, b, result1, recursive_time, iterative_time);

        // 재귀적 방법과 반복적 방법의 결과가 다른 경우
        if (result1 != result2) {
            printf("Error: Recursive method and Iterative method give different results.\n");
            return -1;
        }
    }

    // 모든 테스트가 완료된 경우
    printf("Test completed successfully.\n");
    return 0;
}
#include <stdio.h>
#include "euclid.h"
#include <time.h>
#include<stdlib.h>

// �׽�Ʈ �Լ�
int test_euclid(int count) {
    int i;
    int a, b, result1, result2;

    // �ð� ������ ���� ����
    clock_t start_time, end_time;
    double recursive_time = 0.0; // ����� ������� �ҿ�� �ð�
    double iterative_time = 0.0; // �ݺ����� ������� �ҿ�� �ð�

    // count Ƚ����ŭ ������ ���鼭 �׽�Ʈ ����
    for (i = 0; i < count; i++) {
        // 1~100000000 ������ ������ �� �� ����
        a = rand() % 100000000 + 1;
        b = rand() % 100000000 + 1;

        // ����� ������� �ִ����� ��� �� ���� �ð� ����
        start_time = clock(); // ���� �ð� ����
        result1 = euclidRecursive(a, b); // ����� ������� �ִ����� ���
        end_time = clock(); // ���� �ð� ����
        recursive_time += (double)(end_time - start_time) / CLOCKS_PER_SEC; // ���� �ð� ����

        // �ݺ��� ������� �ִ����� ��� �� ���� �ð� ����
        start_time = clock(); // ���� �ð� ����
        result2 = euclidRepeatative(a, b); // �ݺ��� ������� �ִ����� ���
        end_time = clock(); // ���� �ð� ����
        iterative_time += (double)(end_time - start_time) / CLOCKS_PER_SEC; // ���� �ð� ����

        // ����ð� ��� �� �ִ�����
        printf("a = %d, b = %d, GCD = %d, Recursive time = %f, Iterative time = %f\n", a, b, result1, recursive_time, iterative_time);

        // ����� ����� �ݺ��� ����� ����� �ٸ� ���
        if (result1 != result2) {
            printf("Error: Recursive method and Iterative method give different results.\n");
            return -1;
        }
    }

    // ��� �׽�Ʈ�� �Ϸ�� ���
    printf("Test completed successfully.\n");
    return 0;
}
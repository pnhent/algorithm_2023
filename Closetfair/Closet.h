#pragma once
#ifndef Closet_h
#define Closet_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

typedef struct _point {
    int x;
    int y;
}Point;
typedef Point Element;

Point* closet(Point* a, int left, int right, int n);       //�� ���ϱ� �Լ�
double distance(Point a, Point b);          //�Ÿ����ϱ� �Լ�

//TestFunc
void TC1_mycode(void);

#endif /* Closet_h */
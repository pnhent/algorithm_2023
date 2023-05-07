#pragma once
#ifndef Closet_h
#define Closet_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _point {     //��ǥ ����ü
    int x;
    int y;
}Point;

//ADTs
Point* closet(Point* a, int left, int right, int n);       //�ִ� �Ÿ� ���� ���� �ּ� ��ȯ �Լ�
double distance(Point a, Point b);          //�� 2���� �Ÿ� ��ȯ �Լ�

//TestFunc
void TC1_TwoPoint(void);    //�ΰ��� ��
void TC2_TenPoint(void);    //������ ��
void TC3_OddPoint(void);    //Ȧ������ ��
void TC4_Hunnitpoint(void); //100���� ��

#endif /* Closet_h */
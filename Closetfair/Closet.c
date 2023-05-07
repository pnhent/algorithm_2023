#include "Closet.h"
#include <float.h>
#include <math.h>

static Point* pointclose(Point* a, int l, int r);   //���� �� ���� �ִܰŸ� ���� �� ��ȯ

Point* closet(Point* a, int l, int r, int n)
{
    Point* res = NULL, * leftres = NULL, * rightres = NULL, * centerres = NULL;
    double shortest;
    if (n <= 3)         //���� 3�� ������ ���
    {
        res = pointclose(a, l, r);
        return res;
    }
    else {              //���� 3�� �̻��� ���
        int m = (r + l) / 2;
        int who, cl = l, cr = r;

        //���� ������ ����
        leftres = closet(a, l, m, m - l + 1);   //���� ��� �� ����
        rightres = closet(a, m + 1, r, r - m + 1);      //������ ��� �� ����

        if (distance(leftres[0], leftres[1]) < distance(rightres[0], rightres[1])) {        //������ �� ª�� ���
            shortest = distance(leftres[0], leftres[1]);        //���� �Ÿ� shortest�� ����
            who = 0;        //who�� ��� ���� ���ԵǾ����� ���
        }
        else {
            shortest = distance(rightres[0], rightres[1]);      //������ �Ÿ� shortest�� ����
            who = 1;        //who�� ��� ���� ���ԵǾ����� ���
        }

        while ((a[m].x - shortest) > a[m].x - a[cl].x && cl < m) {  //���ʿ������� �߰� ���� �� �� �ľ�
            cl++;
        }

        while ((a[m + 1].x + shortest < a[cr].x) && cr > m + 1) {   //�����ʿ������� �߰� ���� �� �� �ľ�
            cr--;
        }

        centerres = pointclose(a, cl, cr);     //�߰����� �ִܰŸ� ���� �� ����

        if (distance(centerres[0], centerres[1]) <= shortest)   //�߰������� �� ª�� ���
        {
            free(rightres);     //�޸� �ݳ�
            free(leftres);
            return centerres;   //�߰� �ִܰŸ� ���� �� ��ȯ
        }
        else {
            if (who == 0) { //shortest�� ���� �� ���ԵǾ� ���� ��
                free(centerres);
                free(rightres);
                return leftres;     //���� �ִܰŸ� ���� �� ��ȯ
            }
            else {          //shortest�� ������ �� ���ԵǾ� ���� ��
                free(centerres);
                free(leftres);
                return rightres;    //������ �ִܰŸ� ���� �� ��ȯ
            }
        }
    }
}

double distance(Point a, Point b)   //�Ÿ����ϱ� �Լ�
{
    double distance = 0;
    double x, y;
    x = (double)b.x - (double)a.x;  //�� ���
    y = (double)b.y - (double)a.y;
    x = fabs(x);    //���� ��ȯ
    y = fabs(y);
    distance = sqrt((x * x) + (y * y));
    return distance;
}


Point* pointclose(Point* a, int l, int r)
{
    Point* res;
    double shortest;
    int n;
    n = r - l + 1;
    res = (Point*)malloc(sizeof(Point) * 2);
    shortest = DBL_MAX;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (shortest > distance(a[i], a[j])) {
                shortest = distance(a[i], a[j]);
                res[0] = a[i];
                res[1] = a[j];
            }
        }
    }

    return res;
}
#include "Closet.h"


Point* closet(Point* a, int l, int r, int n)
{
    Point* res = NULL, * leftres = NULL, * rightres = NULL, * centerres = NULL;
    double shortest;
    if (n <= 3)         //���� 3�� ������ ���
    {
        res = (Point*)malloc(sizeof(Point) * 2);
        shortest = distance(a[r], a[l]);
        res[0] = a[l];
        res[1] = a[r];

        for (int i = l; i < r; i++)
        {
            if (shortest > distance(a[i], a[i + 1]))
            {
                shortest = distance(a[i], a[i + 1]);
                res[0] = a[i];
                res[1] = a[i + 1];
            }
        }
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

        centerres = closet(a, cl, cr, cr - cl);

        if (distance(centerres[0], centerres[1]) <= shortest)
        {
            return centerres;
        }
        else {
            if (who == 0) {
                return leftres;
            }
            else {
                return rightres;
            }
        }


    }
}

double distance(Point a, Point b)   //�Ÿ����ϱ� �Լ�
{
    double distance = 0;
    double x, y;
    x = (double)b.x - (double)a.x;
    y = (double)b.y - (double)a.y;
    x = fabs(x);
    y = fabs(y);
    distance = sqrt((x * x) + (y * y));
    return distance;
}
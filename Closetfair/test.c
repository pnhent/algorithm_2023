#include "Closet.h"
#define MAX_CHAR_PER_LINE 30


static void filesave(Point* a);                    //���� ����
static Point* filelead(char* name, int* n);        //���� �б�
static int compare(const void* a, const void* b);  //���Լ�

void TC1_mycode(void)
{
    Point* arr = NULL, * res = NULL;
    int n = 0; //n�� ���� ������ ǥ��
    arr = filelead("test.txt", &n);

    for (int i = 0; i < n; i++)
        printf("%d %d\n", arr[i].x, arr[i].y);
    printf("n: %d\n", n);
    qsort(arr, n, sizeof(Point), compare);
    printf("\n");
    printf("���� �� \n");
    for (int i = 0; i < n; i++)
        printf("%d %d\n", arr[i].x, arr[i].y);
    printf("\n");

    res = closet(arr, 0, n - 1, n);
    printf("\n�ִ� ���� ���� %d %d�� %d %d�Դϴ�.\n", res[0].x, res[0].y, res[1].x, res[1].y);
    printf("�Ÿ��� %.3lf", distance(res[0], res[1]));
    filesave(res);
}

Point* filelead(char* name, int* n)
{
    int count = 1;
    char str[10], * x, * y;
    Point point, * arr;                              //point����ü ����
    FILE* fp;                                   //���� ������
    fp = fopen(name, "r");                          //���� �б�
    arr = (Point*)malloc(sizeof(Point) * 3);        //3ĭ �޸� �Ҵ�
    if (fp == NULL)
        printf("������ �����ϴ�.\n");
    else if (fp != NULL) {
        while (fgets(str, MAX_CHAR_PER_LINE, fp))    //���پ� �о���̰�
        {
            if ((*n % 3) == 0 && !(*n == 0)) {      //n�� 3���� ������ �� �������� ����, (3�� ���) n�� 0�� �ƴ� ��
                count += 1; //count�� 1 �ø���
                arr = realloc(arr, sizeof(Point) * (count * 3));    //�ʱⰪ�� 3ĭ�̹Ƿ� ������ ó�� �������� �� 6ĭ ������ 9ĭ. 3�� ����� ĭ�� �÷�����.
            }
            x = strtok(str, " ");                   //������� ��ūȭ
            y = strtok(NULL, " ");                  //������� ��ūȭ
            point.x = atoi(x);                      //Ascii���� int������ ����ȯ
            point.y = atoi(y);                      //Ascii���� int������ ����ȯ
            arr[*n] = point;                    //arr�迭�� n��° ĭ�� point ����
            *n = *n + 1;                            //�ݺ��Ҷ����� +1 (���� ���� �ľ�)
        }
        fclose(fp);
    }
    return arr;
}

void filesave(Point* a)
{
    char x1[6], y1[6], x2[6], y2[6];
    sprintf(x1, "%d", (a + 0)->x); //int���� ���ڿ��� ����ȯ.
    sprintf(y1, "%d", (a + 0)->y);
    sprintf(x2, "%d", (a + 1)->x);
    sprintf(y2, "%d", (a + 1)->y);
    FILE* fp = fopen("result.txt", "w");    //���� ���� ���� open
    if (fp != NULL) {
        fprintf(fp, "%s %s \n ", x1, y1);   //���Ͽ� �Է�
        fprintf(fp, "%s %s", x2, y2);   //���Ͽ� �Է�
    }
    fclose(fp); //���� �ݱ�
}

int compare(const void* a, const void* b)
{
    Point num1 = *(Point*)a;
    Point num2 = *(Point*)b;

    if (num1.x < num2.x)
        return -1;

    if (num1.x > num2.x)
        return 1;

    return 0;
}

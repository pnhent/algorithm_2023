#include <stdio.h>

int main(void)
{
    int x,y;

    printf("���� 2��: ");
    scanf("%d %d", &x, &y);

    printf("ū ��=%d \n", (x > y) ? x : y);
    printf("���� ��=%d \n", (x < y) ? x : y);
    
    return 0;
}
#include <stdio.h>

int main(void)
{
    int score;

    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &score);

    if(score >= 90)
        printf("���� A\n");
    else if(score >= 80)
        printf("���� B\n");
    else if(score >= 70)
        printf("���� C\n");
    else if(score >= 60)
        printf("���� D\n");
    else if(score >= 50)
        printf("���� E\n");
    else
        printf("���� F\n");
    
    return 0;
}
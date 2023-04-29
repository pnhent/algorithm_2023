//문제 : 원의 둘레를 계산하여 출력하도록 프로그램을 변경하여보자.

#include <stdio.h>

int main(void)
{
    float radius; //반지름
    float circlearea; //원의 둘레

    printf("반지름을 입력하세요: ");
    scanf("%f", &radius);
    
    circlearea = 2 * 3.14 * radius; //원의 둘레 구하는 공식
    printf("원의 둘레: %f", circlearea);

    return 0;
}
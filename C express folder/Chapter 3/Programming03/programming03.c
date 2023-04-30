/*문제 : 사용자로부터 삼각형의 높이와 밑변을 받아서 넓이를 계산하여 출력하는 프로그램을 작성하시오. 
모든 데이터는 실수로 입력되며 출력도 모두 실수형으로 한다.*/

#include <stdio.h>

int main(void)
{
    double base;
    double heigh;
    double area;

    printf("삼각형의 밑변: ");
    scanf("%lf", &base);
    printf("삼각형의 높이: ");
    scanf("%lf", &heigh);

    area = 0.5*heigh*base;
    printf("삼각형의 넓이: %.2lf\n",area);

    return 0;
}
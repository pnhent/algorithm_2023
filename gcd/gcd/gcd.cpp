#include <stdio.h>

int euclid(int a, int b) //최대공약수 구하는 함수 선언
{
    if (b == 0) return a;
    return euclid(b, a % b);
}

int test1_euclid()  //print 함수 호출하는 함수 선언
{
    int gcd = 0;
    gcd = euclid(34, 48); //euclid 함수안에 변수 선언 및 gcd에 저장
    printf("%d", gcd);
    return 0;
}

int main(int argc, char* argv[]) //메인 함수
{
    test1_euclid(); //printf 함수 호출
    return 0;
}

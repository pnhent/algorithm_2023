#pragma once

//프로토타입 기능(전방 선언 API)
long long int euclidRecursive(long long int a, long long int b); //재귀방법으로 이용한 최대공약수 구하는 함수 
long long int euclidRepeatative(long long int a, long long int b); //반복방법으로 이용한 최대공약수 구하는 함수
int test_euclid(int count); //두 수의 쌍을 생성하여 유클리드 알고리즘을 test하는 함수
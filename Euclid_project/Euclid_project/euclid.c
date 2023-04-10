//재귀함수 알고리즘
long long int euclidRecursive(long long int a, long long int b)
{
    if (b == 0) return a; // b가 0이면 a를 반환
    return euclidRecursive(b, a % b); // a를 b로 나눈 나머지와 b를 재귀호출
}

//반복함수 알고리즘
long long int euclidRepeatative(long long int a, long long int b)
{
    long long int temp;
    while (b != 0) //b가 0이 아닌 동안 반복
    {
        temp = b; //b를 temp에 저장
        b = a % b; // a를 b로 나눈 나머지를 b에 저장
        a = temp; //temp를 a에 저장
    }
    return a; //a에 저장
}
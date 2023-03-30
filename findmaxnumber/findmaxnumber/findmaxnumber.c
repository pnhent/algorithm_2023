//이름: 박노현
//문제: 최대 숫자 찾기

#include <stdio.h>
  
int maxnum(int getarr[], int n)            //최대값 반환하는 함수
{   
	int max = getarr[0];                   //배열의 첫번째 원소로 초기화
	int i;
	for (i = 1; i < n; i++)               //if문 반복 배열 크기까지
	{
		if (getarr[i] > max)             //현재 최대값보다 크면 
		{
			max = getarr[i];            //최대값을 교체
		} 
	} 
	return max;                        //최대값 찾았으면 max로 리턴
}

void resultmaxnum()                   //찾은 최대값을 출력해주는 함수
{
	int getarr[] = { 1, 9, 3, 8, 13, 18, 20, 19 };                //정수 배열 입력
	int n = sizeof(getarr) / sizeof(getarr[0]);                   //배열의 크기 계산
	int max = maxnum(getarr, n);                                  //maxnum함수 호출로 max에 저장
	printf("max num: %d\n", max);                                 //max를 출력
}

int main(void)                                              
{ 
	resultmaxnum();                                             //resultmaxnum 함수 호출();
	return 0;                                                   //0으로 반환;
}



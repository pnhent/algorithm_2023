#include <stdio.h>
#include <stdlib.h>

void quickSort(int arr[], int L, int R) {
    int left = L, right = R;
    int pivot = arr[(L + R) / 2];    // pivot 설정 (가운데) 
    int temp;
    do
    {
        while (arr[left] < pivot)    // left가 pivot보다 큰 값을 만나거나 pivot을 만날 때까지 
            left++;
        while (arr[right] > pivot)    // right가 pivot보다 작은 값을 만나거나 pivot을 만날 때까지 
            right--;
        if (left <= right)    // left가 right보다 왼쪽에 있다면 교환 
        {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            /*left 오른쪽으로 한칸, right 왼쪽으로 한칸 이동*/
            left++;
            right--;
        }
    } while (left <= right);    // left가 right 보다 오른쪽에 있을 때까지 반복 

    /* recursion */
    if (L < right)
        quickSort(arr, L, right);    // 왼쪽 배열 재귀적으로 반복 

    if (left < R)
        quickSort(arr, left, R);    // 오른쪽 배열 재귀적으로 반복 
}

int main() {
    // 배열과 인덱스 초기화
    int arr[1000], n = 0;
    FILE* input, * output;

    // 입력 파일 열기
    input = fopen("data.txt", "r");
    if (input == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // 입력 파일에서 정수를 읽어 배열에 저장
    while (fscanf(input, "%d", &arr[n]) == 1) {
        n++;
    }
    fclose(input); // 입력 파일 닫기

    // 퀵 정렬로 배열 정렬
    quickSort(arr, 0, n - 1);

    // 결과를 저장할 파일 열기
    output = fopen("result.txt", "w");
    if (output == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // 'for' 루프 밖에서 'i' 변수 선언
    int i;
    // 정렬된 데이터를 파일에 쓰기
    for (i = 0; i < n; i++) {
        fprintf(output, "%d\n", arr[i]);
    }
    fclose(output); // 출력 파일 닫기

    // 결과가 파일에 저장되었음을 알리는 메시지 출력
    printf("Sorted data has been saved to result.txt\n");

    return 0; // 프로그램 종료
}

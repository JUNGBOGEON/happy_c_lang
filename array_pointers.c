#include <stdio.h>

int main() {
    // int numbers[5] = {1, 3, 5, 7, 9};

    // // 배열의 이름 'numbers'는 첫 번째 요소의 주소와 같다.
    // printf("배열의 주소: %p\n", numbers);

    // for (int i = 0; i <= 4; i++) {
    //     printf("%d 번째 요소의 주소 (&numbers[%d]): %p\n", i, i, &numbers[i]);
    // }
    
    // return 0;
    // int numbers[5] = {1, 3, 5, 7, 9};
    
    // // for 루프를 사용하여 모든 요소의 주소 출력
    // for (int i = 0; i < 5; ++i) {
    //     printf("%d번째 요소의 주소: %p\n", i+1, numbers + i);
    // }

    // return 0;

    int numbers[5] = {1, 3, 5, 7, 9};

    // 포인터를 사용하여 모든 요소의 값 출력
    for (int i = 0; i < 5; ++i) {
        printf("%d번째 요소의 값: %d\n", i, *(numbers + i));
    }

    // 포인터를 사용하여 요소 값 변경
    *numbers = 2; // 첫 번째 요소(numbers[0])를 2로 변경
    *(numbers + 4) = 11; // 다섯 번째 요소(numbers[4])를 11로 변경

    printf("\n변경 후 첫 번째 요소: %d\n", *numbers);
    printf("변경 후 다섯 번째 요소: %d\n", *(numbers + 4));

    return 0;
}

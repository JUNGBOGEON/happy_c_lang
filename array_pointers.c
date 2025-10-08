#include <stdio.h>

int main() {
    int numbers[5] = {1, 3, 5, 7, 9};

    // 배열의 이름 'numbers'는 첫 번째 요소의 주소와 같다.
    printf("배열의 주소: %p\n", numbers);

    for (int i = 0; i <= 4; i++) {
        printf("%d 번째 요소의 주소 (&numbers[%d]): %p\n", i, i, &numbers[i]);
    }
    
    return 0;
}

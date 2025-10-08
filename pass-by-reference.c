#include <stdio.h>

// 매개변수로 int 포인터를 받는 함수
void findValue(int *num) {
    // 포인터를 역참조하여 값을 39로 변경
    *num = 39;
}

int main() {
    int number = 21;
    printf("함수 호출 전: %d\n", number); // 출력: 21

    findValue(&number); // number 변수의 주소를 함수에 전달

    printf("함수 호출 후: %d\n", number); // 출력: 39

    return 0;
}

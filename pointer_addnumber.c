#include <stdio.h>

// int 포인터를 반환하는 함수
int* addNumbers(int *num1, int *num2, int *sum) {
    *sum = *num1 + *num2;
    return sum; // sum 변수의 주소를 반환
}

int main() {
    int number1 = 32;
    int number2 = 18;
    int sum;
    int *result; // 반환된 주소를 저장할 포인터

    result = addNumbers(&number1, &number2, &sum);
    
    // 반환된 포인터를 역참조하여 결과 값 출력
    printf("Sum is %d\n", *result); // 출력: Sum is 50

    return 0;
}

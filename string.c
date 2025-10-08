#include <stdio.h>
#include <string.h>

int main() {
    // char language[] = "C programming";
    // printf("Length: %zu\n", strlen(language)); // 출력: 13
    // return 0;

    // // strcpy
    // char food[] = "Pizza";
    // char best_food[30]; // 복사받을 공간은 충분해야 함

    // strcpy(best_food, food);
    
    // printf("Best food: %s\n", best_food); // 출력: Best food: Pizza
    // return 0;

    // // strcat
    // char text1[50] = "Hey, ";
    // char text2[] = "how are you?";

    // strcat(text1, text2);

    // printf("%s\n", text1); // 출력: Hey, how are you?
    // return 0;

    // // strcmp
    // char text1[] = "abcd";
    // char text2[] = "abcd";
    // char text3[] = "abef";

    // // 같은 문자열 비교
    // int result1 = strcmp(text1, text2);
    // printf("strcmp(text1, text2) = %d\n", result1); // 출력: 0

    // // 다른 문자열 비교
    // int result2 = strcmp(text1, text3);
    // printf("strcmp(text1, text3) = %d\n", result2); // 출력: 0이 아닌 값 (예: -4)

    // return 0;

    // int age = 25;
    // int *ptr; // 포인터 변수 선언

    // ptr = &age; // age 변수의 주소를 ptr에 할당

    // printf("age의 주소: %p\n", &age);
    // printf("ptr에 저장된 값: %p\n", ptr); // age의 주소와 동일한 값이 출력됨

    // return 0;

    // int age = 25;
    // int *ptr = &age; // 선언과 동시에 주소 할당

    // // 주소 출력
    // printf("ptr의 값 (age의 주소): %p\n", ptr);

    // // 역참조를 통한 값 출력
    // printf("*ptr의 값 (age의 값): %d\n", *ptr); // 출력: 25

    // return 0;

    int age = 25;
    int *ptr = &age;

    printf("변경 전 age의 값: %d\n", age); // 출력: 25

    *ptr = 31; // ptr이 가리키는 곳의 값을 31로 변경

    printf("변경 후 age의 값: %d\n", age); // 출력: 31

    return 0;
}

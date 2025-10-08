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

    // strcat
    char text1[50] = "Hey, ";
    char text2[] = "how are you?";

    strcat(text1, text2);

    printf("%s\n", text1); // 출력: Hey, how are you?
    return 0;
}

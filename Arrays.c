/**
 |
 */
#include <stdio.h>

int Arrays() {
    unsigned char length = 64;
    char numbers[64] = "";
    printf("addr: 0X%p\n", numbers);
    printf("Loop 1\n");
    for (int i = 0; i < length; i++) {
        printf("0X%p = %c (%d)\n", &numbers[i], numbers[i], numbers[i]);
    }
    int idx = 0;
    numbers[idx++] = 'D';
    numbers[idx++] = 'o';
    numbers[idx++] = ' ';
    numbers[idx++] = 'T';
    numbers[idx++] = 'r';
    numbers[idx++] = 'u';
    numbers[idx++] = 'o';
    numbers[idx++] = 'n';
    numbers[idx++] = 'g';
    numbers[idx++] = ' ';
    numbers[idx++] = 'P';
    numbers[idx++] = 'h';
    numbers[idx++] = 'i';
    numbers[idx++] = ' ';
    numbers[idx++] = 'K';
    numbers[idx++] = 'h';
    numbers[idx++] = 'a';
    numbers[idx++] = 'n';
    numbers[idx++] = 'h';
    numbers[idx++] = numbers;

    printf("Loop 2\n");
    for (int i = 0; i < length; i++) {
        printf("0X%p = %c (%d)\n", &numbers[i], numbers[i], numbers[i]);
    }
    /* unsigned int numbers = -1000;
    ++numbers;
    printf("value: %d", numbers); */
    return 0;
}

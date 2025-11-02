#include <stdio.h>

void swap_arithmetic(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void swap_xor(int *a, int *b) {
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

void swap_pointer(int *a, int *b) {
    int *temp = a;
    a = b;
    b = temp;
    printf("Pointer swap (inside function): a = %d, b = %d\n", *a, *b);
}

void swap_temp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    printf("Original: x = %d, y = %d\n", x, y);

    swap_arithmetic(&x, &y);
    printf("Arithmetic Swap: x = %d, y = %d\n", x, y);

    swap_xor(&x, &y);
    printf("XOR Swap: x = %d, y = %d\n", x, y);

    swap_temp(&x, &y);
    printf("Temp Variable Swap: x = %d, y = %d\n", x, y);

    swap_pointer(&x, &y);
    return 0;
}

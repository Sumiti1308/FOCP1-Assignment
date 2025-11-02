#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long n) {
    int decimal = 0, i = 0;
    while (n != 0) {
        int digit = n % 10;
        decimal += digit * pow(2, i++);
        n /= 10;
    }
    return decimal;
}

long long decimalToBinary(int n) {
    long long binary = 0;
    int i = 1;
    while (n != 0) {
        binary += (n % 2) * i;
        n /= 2;
        i *= 10;
    }
    return binary;
}

int main() {
    int choice;
    printf("1. Binary to Decimal\n2. Decimal to Binary\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        long long bin;
        printf("Enter binary number: ");
        scanf("%lld", &bin);
        printf("Decimal: %d\n", binaryToDecimal(bin));
    } else {
        int dec;
        printf("Enter decimal number: ");
        scanf("%d", &dec);
        printf("Binary: %lld\n", decimalToBinary(dec));
    }
    return 0;
}

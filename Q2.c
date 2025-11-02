#include <stdio.h>

int hcf(int a, int b) {
    if (b == 0)
        return a;
    return hcf(b, a % b);
}

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("HCF of %d and %d is %d\n", x, y, hcf(x, y));
    return 0;
}

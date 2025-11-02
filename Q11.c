#include <stdio.h>

int main() {
    int arr[] = {10, 15, 22, 33, 40, 55};
    int even[10], odd[10], e = 0, o = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even[e++] = arr[i];
        else
            odd[o++] = arr[i];
    }

    printf("Even array: ");
    for (int i = 0; i < e; i++) printf("%d ", even[i]);

    printf("\nOdd array: ");
    for (int i = 0; i < o; i++) printf("%d ", odd[i]);

    return 0;
}

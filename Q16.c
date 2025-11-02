#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5, pos, val;
    printf("Enter position (0-front, 2-middle, 5-end): ");
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &val);

    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = val;
    n++;

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}

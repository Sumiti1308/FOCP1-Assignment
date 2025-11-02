#include <stdio.h>

int main() {
    int arr[] = {2, 10, 10, 100, 2, 10, 11, 2, 11, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int found = 0;

    for (int i = 0; i < n; i++) {
        int count = 1;
        if (arr[i] == -1) continue;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
            }
        }
        if (count > 1) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    if (!found)
        printf("-1");

    return 0;
}

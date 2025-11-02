#include <stdio.h>

int main() {
    int arr[] = {99, 45, 99, 88, 99, 76};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 99)
            count++;
    }
    printf("Number of students who scored 99: %d\n", count);
    return 0;
}


#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int position;
    printf("Enter a position:");
    scanf("%d", &position);

    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

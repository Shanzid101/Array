
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int number, position;
    printf("Enter insert number and psition:");
    scanf("%d %d", &number, &position);

    for (int i = n - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    arr[position] = number;

    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

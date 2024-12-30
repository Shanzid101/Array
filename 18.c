#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int j = 0;
    for (int i = 0; i < n; i++) {
        int d = 0;
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                d = 1;
                break;
            }
        }
        if (!d) {
            arr[j++] = arr[i];
        }
    }

    for (int i = 0; i < j; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");

    return 0;
}
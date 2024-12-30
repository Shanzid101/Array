
#include <stdio.h>

int main() {
    int n, search;
    printf("Enter a number:");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter a searching number:");
    scanf("%d", &search);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            if (found == 0) {
                printf("FOUND at index position: ");
            }
            printf("%d ", i);
            found = 1;
        }
    }

    if (found == 0) {
        printf("NOT FOUND\n");
    } else {
        printf("\n");
    }

    return 0;
}

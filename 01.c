#include <stdio.h>

int main() {
    int in, i;
    printf("Enter an number:");
    scanf("%d", &in);
    int arr[in];

    for (i = 0; i < in; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = in - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    printf("sum of all even= %d\n", sum);

    return 0;
}
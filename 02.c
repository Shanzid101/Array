
#include <stdio.h>

int main() {
    int in, i, sum = 0;
    printf("Enter a number:");
    scanf("%d", &in);
    int arr[in];

    for (i = 0; i < in; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("sum=%d\n", sum);

    return 0;
}

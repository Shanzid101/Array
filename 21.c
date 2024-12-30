
#include <stdio.h>

int main() {
    int n, m;
    printf("Enter first array:");
    scanf("%d", &n);

    int arrA[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arrA[i]);
    }
    printf("Enter 2nd array:");
    scanf("%d", &m);

    int arrB[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &arrB[i]);
    }

    int diff[n];
    int difrer = 0;

    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < m; j++) {
            if (arrA[i] == arrB[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            diff[difrer++] = arrA[i];
        }
    }

    if (difrer == 0) {
        printf("Empty set\n");
    } else {
        printf("Difference (A-B): ");
        for (int i = 0; i < difrer; i++) {
            printf("%d", diff[i]);
        }
        printf("\n");
    }

    return 0;
}

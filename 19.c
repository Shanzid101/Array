#include <stdio.h>

int main() {
    int n, m;
    printf("Enter a number of array-1:");
    scanf("%d", &n);

    int ar[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    printf("Enter a number of array-2:");
    scanf("%d", &m);

    int arrB[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &arrB[i]);
    }

    int in[n];
    int inter = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (ar[i] == arrB[j]) {
                in[inter++] = ar[i];
                break;
            }
        }
    }

    if (inter == 0) {
        printf("Empty set\n");
    } else {
        printf("Intersection: ");
        for (int i = 0; i < inter; i++) {
            printf("%d ", in[i]);
        }
        printf("\n");
    }

    return 0;
}
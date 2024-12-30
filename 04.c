
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    float ar[n], sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%f", &ar[i]);
        sum += ar[i];
    }

    float av = sum / n;
    printf("Average= %.2f\n", av);

    return 0;
}

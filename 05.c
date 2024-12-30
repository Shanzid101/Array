#include <stdio.h>

int main()
{
    int a, i, sum = 0;
    printf("Enter a number:");
    scanf("%d", &a);
    int arr[a];

    for (i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < a; i += 2)
    {
        sum += arr[i];
    }

    printf("sum= %d\n", sum);

    return 0;
}
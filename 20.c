#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    scanf("%d", &m);

    int arrB[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arrB[i]);
    }

    int un[n + m];
    int unS = 0;

    for (int i = 0; i < n; i++)
    {
        un[unS++] = ar[i];
    }

    for (int i = 0; i < m; i++)
    {
        int found = 0;
        for (int j = 0; j < unS; j++)
        {
            if (arrB[i] == un[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            un[unS++] = arrB[i];
        }
    }

    for (int i = 0; i < unS; i++)
    {
        printf("%d", un[i]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n < 2 || n > 100)
    {
        printf("Shape Not Possible");
        return 0;
    }

    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            if (i == j || i + j == 2 * n - 2 || ((i == 0 || i == 2 * n - 2) && (j & 1) == 0))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
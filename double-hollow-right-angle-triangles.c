#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Shape Not Possible");
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || j == 0 || i == n - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1 || j == n - 1 || i == n - 1)
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
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int max = n;

    while (n != 1)
    {
        printf("%d -> ", n);
        
        if (n < 1)
        {
            n = 1;
        }
        else if (n % 3 == 0)
        {
            n = n / 3;
        }
        else if (n % 5 == 0)
        {
            n = n - 5;
        }
        else
        {
            n = n * 5;
        }

        if (n > max)
        {
            max = n;
        }
    }
    printf("%d\n", n);
    printf("Max Number: %d", max);

    return 0;
}
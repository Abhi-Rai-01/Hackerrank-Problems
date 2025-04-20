#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    scanf("%d", &num);

    if (num % 2 == 0 && num % 3 == 0 && num % 5 != 0)
    {
        printf("A");
    }
    else if (num > 20 && (num == 2 * 3 || num == 2 * 5 || num == 2 * 7 || num == 2 * 11 || num == 3 * 5 || num == 3 * 7 || num == 3 * 11 || num == 5 * 7 || num == 5 * 11 || num == 7 * 11))
    {
        printf("B");
    }
    else if ((num > 9 && num < 100) && !(num % 3 == 0 && num % 7 == 0) && (num % 3 == 0 || num % 7 == 0))
    {
        printf("C");
    }
    else if (num >= 0 && num < 200 && (((int)sqrt(num) * (int)sqrt(num)) == num))
    {
        printf("D");
    }
    else
    {
        printf("E");
    }
}
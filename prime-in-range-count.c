#include <stdio.h>

int primeCount(int, int);

int main()
{
    int L, R;
    scanf("%d %d", &L, &R);

    int count = 0;

    while (L <= R)
    {
        L = primeCount(L, R);
        if(L > R){
            break;
        }
        ++count;
        printf("%d ", L);
        ++L;
    }
    if(count != 0){
        printf("\n");   
    }

    printf("%d", count);

    return 0;
}

int primeCount(int L, int R)
{
    int isPrime = 1;
    for (int i = 2; i * i <= L; ++i)
    {
        if (L % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    
    if (isPrime && L != 1)
    {
        return L;
    }
    else
    {
        return primeCount(++L, R);
    }
}
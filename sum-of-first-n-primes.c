#include <stdio.h>

int primeNumber(int);

int main()
{
    int n;
    scanf("%d", &n);

    int prime = 2;
    int sum = 0;
    int count = 1;

    while (count <= n)
    {
        sum = prime + sum;
        prime = primeNumber(prime);
        ++count;
    }

    printf("%d ", sum);

    return 0;
}

int primeNumber(int pre_prime)
{
    int newprime = pre_prime + 1;
    int isPrime = 1;
    for (int i = 2; i * i <= newprime; i++)
    {
        if (newprime % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
    {
        return newprime;
    }
    else
    {
        return primeNumber(newprime);
    }
}
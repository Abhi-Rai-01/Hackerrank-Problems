#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int copy = n;
    int power = 0;

    while (copy != 0)
    {
        power++;
        copy = copy / 10;
    }

    copy = n;
    int sum = 0;

    while (copy != 0)
    {
        int rem = copy % 10;
        sum = sum + round(pow(rem , power));
        copy = copy / 10;
    }

    if (sum == n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
}
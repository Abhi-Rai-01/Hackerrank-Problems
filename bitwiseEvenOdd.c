#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if ((num & 1) == 0)
        printf("Even");
    else if ((num & 1) == 1)
        printf("Odd");
}
#include <stdio.h>
int main()
{
    int pass[10];
    int wrong1, wrong2, wrong3, rotate1, rotate2, rotate3;
    for (int i = 0; i < 10; ++i)
    {
        scanf("%d ", &pass[i]);
    }
    scanf("%d %d", &wrong1, &rotate1);
    scanf("%d %d", &wrong2, &rotate2);
    scanf("%d %d", &wrong3, &rotate3);

    if (pass[wrong1] != (pass[wrong1] + rotate1) % 10)
    {
        pass[wrong1] = (pass[wrong1] + rotate1) % 10;
    }

    if (pass[wrong2] != (pass[wrong2] + rotate2) % 10)
    {
        pass[wrong2] = (pass[wrong2] + rotate2) % 10;
    }

    if (pass[wrong3] != (pass[wrong3] + rotate3) % 10)
    {
        pass[wrong3] = (pass[wrong3] + rotate3) % 10;
    }

    for (int i = 0; i < 10; ++i)
    {
        printf("%d ", pass[i]);
    }
}
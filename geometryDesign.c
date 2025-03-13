#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a, b, c, d;
    int A, B, C, D;

    if (n == 3)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);

        scanf("%d", &A);
        scanf("%d", &B);
        scanf("%d", &C);

        if ((a + b > c && b + c > a && c + a > b) && ((A + B + C) == 180) && (a > 0 && b > 0 && c > 0 && d > 0))
        {
            if (a == b && b == c && A == B && B == C)
            {
                printf("Equilateral Triangle");
            }
            else if ((a == b && A == B) || (b == c && B == C) || (a == c && A == C))
            {
                printf("Isosceles Triangle");
            }
            else
            {
                printf("Scalene Triangle");
            }
        }
        else
        {
            printf("Invalid Figure");
        }
    }
    else if (n == 4)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);
        scanf("%d", &d);

        scanf("%d", &A);
        scanf("%d", &B);
        scanf("%d", &C);
        scanf("%d", &D);

        if ((A + B + C + D) == 360 && (a > 0 && b > 0 && c > 0 && d > 0))
        {
            if ((a == b && b == c && c == d) && (A == 90 && B == 90 && C == 90 && D == 90))
            {
                printf("Square");
            }
            else if ((a == c && b == d) && (A == 90 && B == 90 && C == 90 && D == 90))
            {
                printf("Rectangle");
            }
            else if ((a == b && b == c && c == d) && (A == C && B == D))
            {
                printf("Rhombus");
            }
            else if ((a == c && b == d) && (A == C && B == D))
            {
                printf("Parallelogram");
            }
            else
            {
                printf("Invalid Figure");
            }
        }
        else
        {
            printf("Invalid Figure");
        }
    }
    else if (n == 0)
    {
        printf("Circle");
    }
}
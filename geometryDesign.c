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

        if ((a + b > c && b + c > a && c + a > b) && ((A + B + C) == 180) && (a > 0 && b > 0 && c > 0))
        {
            if (a == b && b == c && A == B && B == C)
            {
                printf("Equilateral Triangle");
            }
            else if ((a == b && b != c && A == B) || (b == c && c != a && B == C) || (a == c && c != b && A == C))
            {
                printf("Isosceles Triangle");
            }
            else if (a != b && b != c && a != c && A != B && B != C && C != A)
            {
                printf("Scalene Triangle");
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
            if ((a == b && b == c && c == d))
            {
                if (A == 90 && B == 90 && C == 90 && D == 90)
                {
                    printf("Square");
                }
                else if (A == C && B == D)
                {
                    printf("Rhombus");
                }
                else
                {
                    printf("Invalid Figure");
                }
            }
            else if (a == c && b == d)
            {
                if (A == 90 && B == 90 && C == 90 && D == 90)
                {
                    printf("Rectangle");
                }
                else if (A == C && B == D)
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
        else
        {
            printf("Invalid Figure");
        }
    }
    else if (n == 0)
    {
        printf("Circle");
    }
    else
    {
        printf("Invalid Figure");
    }
}
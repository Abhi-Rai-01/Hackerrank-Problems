#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    int mul = (x - 1) / 360;
    int angle = x - (mul*360);

    if (angle >= 0 && angle < 90)
    {
        printf("Acute Angle");
    }
    else if (angle == 90)
    {
        printf("Right Angle");
    }
    else if (angle > 90 && angle < 180)
    {
        printf("Obtuse Angle");
    }
    else if (angle == 180)
    {
        printf("Straight Angle");
    }
    else if (angle > 180 && angle < 360)
    {
        printf("Reflex Angle");
    }
    else if (angle == 360)
    {
        printf("Full Rotation");
    }
}
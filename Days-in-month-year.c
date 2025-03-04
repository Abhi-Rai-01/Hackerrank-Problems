#include <stdio.h>
int main()
{
    int month;
    int year;

    scanf("%d", &month);
    scanf("%d", &year);

    if (year < 1 && month < 1)
    {
        printf("Invalid Month\n");
        printf("Invalid Year");
    }
    else if (year < 1){
        printf("Invalid Year");
    }
    else if (year > 0)
    {
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("%d\n", 31);
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            printf("%d\n", 30);
            break;

        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            {
                printf("%d\n", 29);
            }
            else
            {
                printf("%d\n", 28);
            }
            break;

        default:
            printf("Invalid Month\n");
            break;
        }
    }
}
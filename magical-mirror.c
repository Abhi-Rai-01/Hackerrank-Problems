#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    _Bool con_1 = (((num & 1)==0) && num > 10);
    _Bool con_2 = ((num > 15) && num % 3 == 0);
    _Bool con_3 = (num % 7 == 0);

    if (num > 0)
    {
        if (con_1 && con_2 && con_3)
        {
            printf("The verdict for the number %d is: SUPERNATURAL", num);
        }
        else if ((con_1 && con_2) || (con_2 && con_3) || (con_1 && con_3))
        {
            printf("The verdict for the number %d is: MIRACULOUS", num);
        }
        else if (con_1 || con_2 || con_3)
        {
            printf("The verdict for the number %d is: MAGICAL", num);
        }
        else
        {
            printf("The verdict for the number %d is: NORMAL", num);
        }
    }
    else
    {
        printf("The verdict for the number %d is: INVALID", num);
    }
}
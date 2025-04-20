#include <stdio.h>
int main()
{
    int age, income, tolerance;
    scanf("%d", &age);
    scanf("%d", &income);
    scanf("%d", &tolerance);

    if (age > 50)
    {
        if (income > 75000 && tolerance == 3)
        {
            printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
        }
        else if (income <= 30000 && tolerance < 3)
        {
            printf("Low Risk Portfolio: Suitable for conservative investments.");
        }
        else
        {
            printf("Low Risk Portfolio: Suitable for conservative investments.");
        }
    }
    else if (age >= 30 && age <= 50)
    {
        if (income > 75000 && tolerance == 3)
        {
            printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
        }
        else if (income > 75000 && tolerance < 3)
        {
            printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
        }
        else if (income <= 30000 && tolerance < 3)
        {
            printf("Low Risk Portfolio: Suitable for conservative investments.");
        }
        else
        {
            printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
        }
    }
    else
    {
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
}
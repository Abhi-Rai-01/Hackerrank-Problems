#include <stdio.h>
int main()
{
    int budget, guests, foodCostPerGuest, decorationCost, musicCost, extraExpenses;
    scanf("%d", &budget);
    scanf("%d", &guests);
    scanf("%d", &foodCostPerGuest);
    scanf("%d", &decorationCost);
    scanf("%d", &musicCost);
    scanf("%d", &extraExpenses);

    int totalFoodCost = foodCostPerGuest * guests;
    int totalCost = totalFoodCost + decorationCost + musicCost + extraExpenses;

    if ((totalCost <= budget) && (guests > 5 && guests < 51) && (decorationCost < 0.3 * budget || totalFoodCost < 0.5 * budget))
    {
        if (guests>25 && musicCost==0)
        {
            printf("Celebration Denied");
        }
        else{
            printf("Celebration Approved");
        }   
    }
    else{
        printf("Celebration Denied");
    }
}
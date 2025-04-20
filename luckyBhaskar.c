#include<stdio.h>
int main(){
    double initialAmount;
    scanf("%lf", &initialAmount);
    int days;
    scanf("%d", &days);

    double x = initialAmount, minAmount = initialAmount;
    
    int i;
    for ( i = 1; i <= days; ++i)
    {
        if (x >= initialAmount*0.4){
            if (i%2==0 && i%3==0){
                x = x + (x*0.7);
                i += 6;
            }
            else if (i%2==0)
                x = x - (x*0.125);
            else if (i%3==0)
                x = x - (x*0.2);
            else
                x = x - (x*0.1);

            if (x < minAmount)
                minAmount = x;
        }
        else
            break;
    }

    if (i>days)
        printf("After %d days: %.2lf\n", days, x);
    else
        printf("Stopped early after %d days: %.2lf\n", i-1, x);
    
    printf("Minimum amount held by Bhaskar: %.2lf\n", minAmount);
    
    if (x > initialAmount*0.7)
        printf("Lucky Bhaskar");
    else
        printf("Better Luck Next Time!");
}
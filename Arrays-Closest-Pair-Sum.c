#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int target_sum;
    scanf("%d", &target_sum);

    int num1, num2;
    int dis = 1000001;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = arr[i] + arr[j];
            if (abs(sum - target_sum) < dis)
            {
                dis = abs(sum - target_sum);
                num1 = arr[i];
                num2 = arr[j];
                if(dis == 0){
                    break;
                }
            }
        }
    }
    printf("%d %d", num1, num2);

    return 0;
}
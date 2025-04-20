#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n)
{
    int large = INT_MIN;
    int second_large = INT_MIN;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > second_large && arr[i] != large)
        {
            second_large = arr[i];
        }
    }

    if (second_large != INT_MIN)
    {
        return second_large;
    }

    return -1;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findSecondLargest(arr, n));
    return 0;
}
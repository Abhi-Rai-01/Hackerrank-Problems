#include <stdio.h>
#include <limits.h>
int kthSmallest(int arr[], int n, int k)
{
    if (k <= n && n > 0 && k > 0)
    {
        for (int i = 1; i <= k - 1; ++i)
        {
            int min = 0;
            for (int j = 0; j < n; ++j)
            {
                if (arr[j] < arr[min] && arr[j] != INT_MAX)
                {
                    min = j;
                }
            }
            arr[min] = INT_MAX;
        }

        int kth_smallest = 0;
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] < arr[kth_smallest] && arr[i] != INT_MAX)
            {
                kth_smallest = i;
            }
        }

        return arr[kth_smallest];
    }
    else
    {
        return -1;
    }
}

int main()
{
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);
    printf("%d\n", kthSmallest(arr, n, k));

    return 0;
}
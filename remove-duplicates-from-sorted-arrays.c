#include <stdio.h>

void removeDuplicates(int arr[], int *n)
{
    int i = 1;

    while (i < *n)
    {
        if (arr[i - 1] == arr[i])
        {
            for (int j = i; j < (*n) - 1; j++)
            {
                arr[j] = arr[j + 1];
            }

            (*n)--;
        }
        else{
            ++i;
        }
    }
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

    removeDuplicates(arr, &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n%d\n", n); // Print new size

    return 0;
}
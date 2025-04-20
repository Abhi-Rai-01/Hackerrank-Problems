#include <stdio.h>

void moveZerosToEnd(int arr[], int n)
{
    int size = n;
    for (int i = 0; i < size ; i++)
    {
        if (arr[i] == 0)
        {
            int temp = arr[i];
            for (int j = i + 1; j < n; j++)
            {
                arr[j-1] = arr[j];
            }
            arr[n-1] = temp;
            --i;
            --size;
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

    moveZerosToEnd(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
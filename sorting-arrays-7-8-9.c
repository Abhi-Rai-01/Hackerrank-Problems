#include <stdio.h>
#include <stdlib.h>

void sortArray(int arr[], int n)
{
    int count7 = 0;
    int count8 = 0;
    int count9 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 7)
        {
            count7++;
        }
        else if (arr[i] == 8)
        {
            count8++;
        }
        else
        {
            count9++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i < count7)
        {
            arr[i] = 7;
        }
        else if (i < count7 + count8)
        {
            arr[i] = 8;
        }
        else{
            arr[i] = 9;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    sortArray(arr, n);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    free(arr);
    return 0;
}
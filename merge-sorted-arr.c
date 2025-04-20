#include <stdio.h>

int main()
{
    int n1;
    scanf("%d", &n1);
    int arr1[n1];

    for (int i = 0; i < n1; ++i)
    {
        scanf("%d ", &arr1[i]);
    }

    int n2;
    scanf("%d", &n2);
    int arr2[n2];

    for (int i = 0; i < n2; ++i)
    {
        scanf("%d ", &arr2[i]);
    }

    int arr1_i = 0;
    int arr2_i = 0;
    int j = 0;
    int mergeArr[n1 + n2];
    while (arr1_i < n1 && arr2_i < n2)
    {
        if (arr1[arr1_i] < arr2[arr2_i])
        {
            mergeArr[j++] = arr1[arr1_i++];
        }
        else
        {
            mergeArr[j++] = arr2[arr2_i++];
        }
    }
    while (arr1_i < n1)
    {
        mergeArr[j++] = arr1[arr1_i++];
    }
    while (arr2_i < n2)
    {
        mergeArr[j++] = arr2[arr2_i++];
    }
    

    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", mergeArr[i]);
    }

    return 0;
}
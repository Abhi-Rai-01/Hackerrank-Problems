#include <stdio.h>

// void bubbleSort(int *, int);

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n - 1];
    for (int i = 1; i <= n - 1; ++i)
    {
        scanf("%d ", &arr[i]);
    }

    // bubbleSort(arr, n - 1);

    int x;

    for (int i = 1; i <= n; ++i)
    {
        int j;
        for (j = 1; j <= n - 1; ++j)
        {
            if (i == arr[j])
            {
                break;
            }
        }
        if (j == n)
        {
            x = i;
            break;
        }
    }
    printf("%d", x);
}


// bubble sort se time complaxicity bd rhi hai jisse code efficiently kaam nhi kar r

// void bubbleSort(int *arr, int size)
// {
//     for (int i = 0; i <= size - 2; ++i)
//     {
//         for (int j = 0; j <= size - i - 2; ++j)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }
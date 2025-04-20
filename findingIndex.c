#include <stdio.h>

int linearSearch(int *, int, int);

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d ", &arr[i]);
    }

    int target;
    scanf("%d", &target);

    int index = linearSearch(arr, n, target);

    printf("%d", index);
}

int linearSearch(int *arr, int n, int target)
{
    for(int i = 0; i<=n-1 ; ++i){
        if(target == arr[i]){
            return i;
        }
    }
    return -1;
}
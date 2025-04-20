#include <stdio.h>

void leftRotateByOne(int arr[], int n) {
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

// Function to rotate the array
void rotateArray(int arr[], int n, int k)
{
    k = k % n;
    for (int i = 0; i < k; i++) {
        leftRotateByOne(arr, n);
    }
}

int main()
{
    int n, k;
    // Reading input
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    // Call the function to rotate the array
    rotateArray(arr, n, k);

    // Print the rotated array
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
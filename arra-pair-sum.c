#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i<=n-1; ++i){
        scanf("%d ", &arr[i]);
    }
    
    int target_sum;
    scanf("%d", &target_sum);
    
    for (int i = 0; i <= n-2; ++i)
    {
        for (int j = i+1; j <= n-1 ; ++j)
        {
            if (target_sum == arr[i] + arr[j])
            {
                printf("%d %d", arr[i], arr[j]);
                return 0;
            }
        }
    }
    printf("%d", -1);

    return 0;
}
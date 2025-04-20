#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i;
    scanf("%d", &i);
    
    i = 1<<i;
    
    n = n^i;
    
    printf("%d", n);
    
    return 0;
}
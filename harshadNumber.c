#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int sum = 0;
    int rem;
    int div = n;
    
    while(div>0){
        rem = div%10;
        sum = sum + rem;
        
        div = div/10;
    }
    
    if(n % sum == 0){
        printf("%d is a harshad number", n);
    }
    else{
        printf("%d is not a harshad number", n);
    }

    return 0;
}

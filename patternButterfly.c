#include<stdio.h>
int main(){
    
    int num;
    scanf("%d", &num);

    if (num>1)
    {
        for (int i = 0; i <= 2*(num-1) ; ++i)
        {
            for (int j = 0; j <= (num-1) ; ++j){
                if((i>=j && i+j<=2*(num-1)))
                printf("*");
                else
                printf(" ");
            }
            for (int j = 0; j <= (num-1) ; ++j){
                if((i+j>=num-1 && i-j<=num-1))
                printf("*");
                else
                printf(" ");
            }
            printf("\n");
        }
    }
    else{
        printf("Shape Not Possible");
    }
}
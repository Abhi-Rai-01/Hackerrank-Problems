#include<stdio.h>
int main(){
    
    int num;
    scanf("%d", &num);


    if (num>1)
    {
        for (int i = 0; i <= 2*(num-1) ; ++i)
        {
            for (int j = 0; j <= 2*(num-1) ; ++j){
                if( j==0 || (i==j && j<num) || (i+j == 2*num-2 && j<num))
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
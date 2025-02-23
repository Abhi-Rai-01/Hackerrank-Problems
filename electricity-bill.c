#include<stdio.h>
int main(){

    float n;
    scanf("%f", &n);

    if(n>=0 && n<=100){
        printf("The electricity bill is: %.2f.", n*5-(n*0.50));
    }
    else if(n>100 && n<=300){
        if(n<=200){
            printf("The electricity bill is: %.2f.", 100*5+((n-100)*7)-(100*5+((n-100)*7))*0.1);
        }
        else{
            printf("The electricity bill is: %.2f.", 100*5+((n-100)*7));
        }
    }
    else if(n>300){
        printf("The electricity bill is: %.2f.", (100*5)+(200*7)+((n-300)*10));
    }
    else{
        printf("Invalid Input!");
    }
    
    return 0;
}
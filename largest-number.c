#include<stdio.h>

int main(){
    int a,b,c,largest;
    largest = a;
    if(b>a){
        largest = b;
    }
    if(c>b){
        largest = c;
    }
    printf("The largest number is %d", largest);
}
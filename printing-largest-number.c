#include<stdio.h>
int main() {
    int a, b, c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if (a<=b) {
        if (b<=c) {
            printf("The largest number is %d",c);
        }
        else {
            printf("The largest number is %d",b);
        }
    }
    else {
        if (a>=c) {
            printf("The largest number is %d",a);
        }
        else {
            printf("The largest number is %d",c);
        }
    }
}
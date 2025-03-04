#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if( a<(b+c) && b<(a+c) && c<(b+a) ){
        if ( a==b && b==c ){
            printf("Lengths: [%d, %d, %d]\n", a, b, c);
            printf("Type: Equilateral\n");
            printf("All sides are of the same length.");
        }
        else if( (a==b) || (a==c) || (b==c)){
            printf("Lengths: [%d, %d, %d]\n", a, b, c);
            printf("Type: Isosceles\n");
            printf("Exactly two sides are equal.");
        }
        else{
            printf("Lengths: [%d, %d, %d]\n", a, b, c);
            printf("Type: Scalene\n");
            printf("All sides are of different lengths.");
        }
    }
    else{
        printf("Lengths: [%d, %d, %d]\n", a, b, c);
        printf("Type: Invalid\n");
        printf("Cannot form a valid shape.");
    }
    return 0;
}
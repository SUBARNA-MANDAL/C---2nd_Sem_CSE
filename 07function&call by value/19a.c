/*
     Write a program to swap two integer values using Call by value
*/
#include<stdio.h>
void callbyvalue(int a,int b){          //
    a = a + b - (b=a);
}
void main(){
    int x,y;
    printf("Enter 1st value --> ");
    scanf("%d",&x);
    printf("Enter 2nd value --> ");
    scanf("%d",&y);

    printf("Before swapping x = %d and y = %d",x,y);
    callbyvalue(x,y);
    printf("\nAfter swapping x = %d and y = %d",x,y);       //a & b will remains same
}
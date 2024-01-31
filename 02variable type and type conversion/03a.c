/*
    Write a C program to swap two integer numbers without using any 3 variable.
*/

#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the 1st number : ");  //input is taken
    scanf("%d",&a);
    printf("Enter the 2nd number : ");
    scanf("%d",&b);
    
    printf("Before swapping 1st number : %d and 2nd number is %d.",a,b);
    //a = a+b-(b=a);      //i)single line swapping
    
    a = a+b;                //ii) Mostly used.
    b = a-b;
    a = a-b;    
    printf("\nAfter swapping 1st number : %d and 2nd number is %d.",a,b);
}
/*
Input three numbers and find the maximum and minimum of them using Conditional operator (Ternary operator).

*/

#include<stdio.h>
void main(){
    int a,b,c,min,max;

    printf("Enter the 1st number : ");
    scanf("%d",&a);
    printf("Enter the 2nd number : ");
    scanf("%d",&b);
    printf("Enter the 3rd number : ");
    scanf("%d",&c);

    //Using Ternary operator
    max = (a>b && b>c)||(a>c && c>b) ? a :
            (b>c && c>a)||(b>a && a>c) ? b :
                c;
    min = (a<c && c<b) || ( a<b && b<c) ? a :
            (b<c && c<a) || (b<a && a<c) ? b :
                c; 
    printf("Using Ternary operator ---\n");
    printf("The max is %d and the min is %d",max,min);

    //Using if-else block

    if((a>b && b>c)||(a>c && c>b) )   max = a;
    else if((b>c && c>a)||(b>a && a>c))   max = b;
    else max = c;

    if((a<c && c<b)||( a<b && b<c)) min = a;
    else if((b<c && c<a) || (b<a && a<c)) min = b;
    else min = c;


    printf("\nUsing if-else block ---\n");
    printf("The max is %d and the min is %d",max,min);



}
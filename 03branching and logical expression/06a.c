/*
        Input three numbers and find the maximum and minimum of them using Conditional operator (Ternary operator).
*/
#include<stdio.h>
void main(){
    int a,b,c,min,max,sw;

    printf("Enter the 1st number : ");      //inputs are taken
    scanf("%d",&a);
    printf("Enter the 2nd number : ");
    scanf("%d",&b);
    printf("Enter the 3rd number : ");
    scanf("%d",&c);

    printf("\n\t|-----------------------------------------------|");
    printf("\n\t|\t1 For Using teernary operator\t\t|\n\t|\t2 for using if-else block        \t|");  //Taking the required check technique
    printf("\n\t|-----------------------------------------------|\n");
    printf("\nEnter your choice --> ");
    scanf("%d",&sw);

    //Using Ternary operator max & min calculation
    if(sw==1){
        max = (a>b && b>c)||(a>c && c>b) ? a :
                (b>c && c>a)||(b>a && a>c) ? b :
                    c;
        min = (a<c && c<b) || ( a<b && b<c) ? a :
                (b<c && c<a) || (b<a && a<c) ? b :
                    c; 
        printf("Using Ternary operator ---\n");
    }
    else{
        if((a>b && b>c)||(a>c && c>b) )   max = a;  //Using if-else block max & min calculation
        else if((b>c && c>a)||(b>a && a>c))   max = b;
        else max = c;

        if((a<c && c<b)||( a<b && b<c)) min = a;
        else if((b<c && c<a) || (b<a && a<c)) min = b;
        else min = c;
        printf("\nUsing if-else block ---\n");
    }
    printf("The max is %d and the min is %d",max,min);



}
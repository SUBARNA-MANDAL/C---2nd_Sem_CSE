/*
Declare an integer variable a, float b, char c, double d. Input the values, print value, 
address and the size of a, b, c, d.

*/

#include<stdio.h>
void main(){
    int a;
    float b;
    char c;
    double d;

    printf("Enter an integer : ");
    scanf("%d",&a);
    printf("Enter a float : ");
    scanf("%f",&b);
    printf("Enter a char : ");
    scanf(" %c",&c);
    printf("Enter a double : ");
    scanf("%lf",&d);


    printf("\nEnterd integer is : %d and the address is %u",a,&a);
    printf("\nEnterd float is : %f and the address is %u",b,&b);
    printf("\nEnterd char is : %c and the address is %u",c,&c);
    printf("\nEnterd double is : %lf and the address is %u",d,&d);
}
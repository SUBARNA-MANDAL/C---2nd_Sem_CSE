/*
    Declare an integer variable a, float b, char c, double d. Input the values, print value, 
    address and the size of a, b, c, d.
*/

#include<stdio.h>
void main(){
    int a;          //a(int) , b(float) , c(char) , d(double) variables are 
    float b;
    char c;
    double d;

    printf("Enter an integer : ");  //inputs are taken by using proper formet specifiers
    scanf("%d",&a);
    printf("Enter a float : ");
    scanf("%f",&b);
    printf("Enter a char : ");
    scanf(" %c",&c);
    printf("Enter a double : ");
    scanf("%lf",&d);

    //printing the results ( value , physical and logical address of each variable.)
    printf("\nEnterd integer is : %d , physical address is %p  and the logical address is %u",a,&a,&a);
    printf("\nEnterd float is : %f , physical address is %p  and the logical address is %u",b,&b,&b);
    printf("\nEnterd char is : %c , physical address is %p  and the logical address is %u",c,&c,&c);
    printf("\nEnterd double is : %lf , physical the address is %p and the logical address is  is %u",d,&d,&d);
}
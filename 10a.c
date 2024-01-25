/*
    Write a program to check a number is an Amstrong number or not.
*/
#include<stdio.h>
#include<math.h>
void main(){
    int a,t=0,l,i,r,temp;
    printf("Enter the number : ");
    scanf("%d",&a);
    l=log10(a)+1;
    temp=a;
    while(temp>0){
        r = temp%10;
        t = t + pow(r,l);
        temp/=10;
    }
    if(t==a)    printf("\n%d is a amstrong number.",a);
    else    printf("\n%d is not a amstrong number.",a);
}
/*
    Write a program to calculate---
   y =  ∑(x^1+x^2+x^3+.....+x^n) , take x and n as input , store the result in y and print y as output.
*/

#include<stdio.h>
#include<math.h>
void main(){
    int x,i;
    double y=0;
    printf("Enter the x value : ");     //x value taken
    scanf("%d",&x);
    for(i=1;i<x+1;i++){
        y+=(double)pow(i,i);
    }
    printf("Current y = %lf\n",y);      //out printing
}
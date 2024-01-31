/*
Write a program to calculate 
        y = ∑(x = 1 to n) (1 / fact(x)) , Where fact()) is user defined function to calculate factorial. 
*/
#include<stdio.h>
int fact(int n){                //take n value and return n!
    int i,r=1;
    for(i=1;i<n+1;i++)  r*=i;
    return r;
}
void main(){
    int x,i;
    float r;
    printf("Enter the x value --> ");       //x value as input
    scanf("%d",&x);

    for(i=1;i<x+1;i++){
        r += (float)1/(fact(i));
    }
    printf("\nSo, the result is = %lf",r);      //printing the result
}
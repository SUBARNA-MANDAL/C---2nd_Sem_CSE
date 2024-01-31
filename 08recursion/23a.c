/*
         Write a program to show Fibonacciseries by recursion upto n-terms. 
*/
//Febonarcci series is a sequence where each number is the sum of 2 preceding element.
#include<stdio.h>
void main(){
    int a=0,b=1,n,t;
    printf("Enter the total element of the fibonarcii seris --> ");
    scanf("%d",&n);             //input for total series kength

    printf("The series is --> 0 1");        
    while(n>2){
        t=a+b;
        a=b;
        b=t;
        printf(" %d",a);
        n--;
    }
}
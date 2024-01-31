/*
    Write a program to check that number is prime or not. 
*/
#include<stdio.h>
void main(){
    int a,i,f=1;
    printf("Enter the number : ");  //number is taken for prime number
    scanf("%d",&a);
    if(a==1)    f=0;                //if the number is 1 then it is not prime.
    for(i=2;i<=a/2;i++){        //a number is never devided by greater than (number)/2
        if(a%i==0){         
            f=0;
            break;              //if number devided by any number then no need for iteration
        }
    }
    if(f)   printf("%d is a prime number.",a);      //output
    else    printf("%d is not a prime number.",a);
}
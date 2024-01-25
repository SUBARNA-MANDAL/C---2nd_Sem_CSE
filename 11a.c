/*
    Write a program to check that number is prime or not. 
*/

#include<stdio.h>
void main(){
    int a,i,f=1;
    printf("Enter the number : ");
    scanf("%d",&a);
    if(a==1)    f=0;
    for(i=2;i<=a/2;i++){        
        if(a%i==0){
            f=0;
            break;
        }
    }
    if(f)   printf("%d is a prime number.",a);
    else    printf("%d is not a prime number.",a);
}
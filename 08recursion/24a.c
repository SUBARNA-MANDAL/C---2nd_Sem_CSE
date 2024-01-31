/*
        Calculate the value of Ackermann(1,2)
*/
#include<stdio.h>
int Ackermann(int m,int n){
    if(m==0)    return n+1;
    else if(m>0 && n==0)   Ackermann(m-1,1);
    else if(m>0 && n>0)    Ackermann(m-1,(Ackermann(m,n-1)));   
}
void main(){
    int m,n;
    printf("Enter 1st number --> ");        //input m and n values
    scanf("%d",&m);
    printf("Enter 2nd number --> ");
    scanf("%d",&n);
    printf("So,Ackermann(%d,%d) = %d",m,n,Ackermann(m,n));      //function call is done
}
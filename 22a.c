/*
        Write a program to calculate GCD of two integer numbers using recursion.
*/
int gcd_recursion(int y,int x){                       //Recursive function 
    if((y%x) == 0) return x;                //if division possible(remainder==0) then return divisor
    else    gcd_recursion(x,(y%x));                   //if division not possible(remainder != 0) then recursively call
}                                           //gcd function the passed parameters (divisor , remainder)
int gcd_loop(int x,int y){
    int i;
    if(x>y) x = x+y-(y=x);
    for(i=x;i>0;i--){
        if(x%i==0 && y%i==0)    return i;
    }
} 
#include<stdio.h>
void main(){
    int x,y,r,sw;
    printf("Enter 1st number --> ");
    scanf("%d",&x);
    printf("Enter 2nd number --> ");
    scanf("%d",&y);
                                                    //Taking the required check technique
    printf("\n\t|-----------------------------------------------|");
    printf("\n\t|\t1 For Using recursive function\t\t|\n\t|\t2 for without using recursive function\t|"); 
    printf("\n\t|-----------------------------------------------|\n");   
    printf("\nEnter your choice --> ");
    scanf("%d",&sw);

    if(sw==1){
            if(x>y) r = gcd_recursion(y,x);
            else    r = gcd_recursion(x,y);
    }
    else{
        r = gcd_loop(x,y);
    }
    printf("The GCD of %d and %d is = %d",x,y,r);
}
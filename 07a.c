/*
Write a program to show the real roots of a quadratic equation
*/
#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c;
    printf("Enter the value of a ,b and c accordingly --> ");
    scanf("%d%d%d",&a,&b,&c);

    if(a==0){
        printf("\n=>The roots are undefined.");
       
    }
    else{
        if((b*b-4*a*c)==0)  printf("Both root have same value.That is %0.3f",(float)(-b)/(2*a));
        else if((b*b-4*a*c)<0){
            printf("\nThe roots are imaginary.");
            printf("\nr1 = (%0.3f + %0.3fi) and r2 = (%0.3f - %0.3fi)",(float)(-b)/(2*a) , sqrt(-((float)b*b - 4*a*c))/(2*a),(float)(-b)/(2*a) , sqrt(-((float)b*b - 4*a*c))/(2*a));
        }
        else    printf("The roots are : r1 = %0.3f and r2 = %0.3f",((float)(-b)+sqrt(b*b-4*a*c))/(2*a),((float)(-b)-sqrt(b*b-4*a*c))/(2*a));
    }
}
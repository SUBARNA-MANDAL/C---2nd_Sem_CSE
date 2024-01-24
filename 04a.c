/*

Write a program to calculate maturity amount using compound interest.

*/
#include<stdio.h>
#include<math.h>
void main(){
    float t,f,r;
    double i,p;
    printf("Enter the principle amount : ");    //Taking inputs...
    scanf("%lf",&p);
    printf("Enter the rate of interest : ");
    scanf("%f",&r);
    printf("Enter the year : ");
    scanf("%f",&t);
    printf("Enter the frequency : ");
    scanf("%f",&f);

    i = p * (pow(1+r/(f*100),t*f));      //Interest calculation...

    printf("\nSo,for given p = %0.3lf , t = %f year , r = %f , f = %f\nInterest is = %0.4lf",p,t,r,f,i); //Output printing...
}
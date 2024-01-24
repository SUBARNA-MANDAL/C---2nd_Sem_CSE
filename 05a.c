/*
Write a program to check a given year is a leap year or not
*/
#include<stdio.h>
void main(){
    int yr;
    printf("Enter the year : ");
    scanf("%d",&yr);

    if(yr%4 == 0){
        if(yr%100==0){
            if(yr%400==0)   printf("%d year is a leap year",yr);
            else    printf("%d year is not a leap year",yr);
        }
        else    printf("%d year is a leap year",yr);
    }
    else    printf("%d year is not a leap year",yr);
}
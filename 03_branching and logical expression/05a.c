/*
    Write a program to check a given year is a leap year or not
*/
#include<stdio.h>
void main(){
    int yr;
    printf("Enter the year : ");    //taking year as user input
    scanf("%d",&yr);

    if(yr%4 == 0){          //check if yr is devided by 4 or not
        if(yr%100==0){                  //if yr devided by 4 then it check yr is devided by 100 or not
            if(yr%400==0)   printf("%d year is a leap year",yr);        //if yr devided by 100 then check for 400
            else    printf("%d year is not a leap year",yr);
        }
        else    printf("%d year is a leap year",yr);
    }
    else    printf("%d year is not a leap year",yr);
}
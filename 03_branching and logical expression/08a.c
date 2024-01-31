/*
    Write a program to generate a basic calculator which will perfom addition, subtraction, division and 
    multiplication of two integer numbers.

*/
#include<stdio.h>
#include<ctype.h>
void main(){
    char sw,k;    
    float a,b;
    printf("\n\t\t*-----------------------------*\n");
    printf("\t\t*    Welcome to $-Calculator  *\n");
    printf("\t\t*-----------------------------*\n\n");

    do{
        printf("\nEnter the 1st number : ");    //input of 1st number
        scanf("%f",&a);

        printf("Enter the operation need to be performed : ");  //input for performed operation
        scanf(" %c",&sw);

        printf("Enter the 2nd number : "); //input for 2nd number
        scanf("%f",&b);

        switch(sw){                     // switch case operation
            case '+' :
                printf("So, (%0.3f + %0.3f) = %0.3f",a,b,(a+b));
                break;
            case '-' :
                printf("So, (%0.3f - %0.3f) = %0.3f",a,b,(a-b));
                break;
            case '*' :
                printf("So, (%0.3f * %0.3f) = %0.3f",a,b,(a*b));
                break;
            case '/' :
                if(b==0)    printf("Division is not possible.");
                else  printf("So, (%0.3f / %0.3f) = %0.3f",a,b,(a/b));  
                break;
            case '.' :
                return;
            default : printf("Invalid input.");
        }
        printf("\nTo continue press y  else anything : ");  //check wheather user want more calculation or not
        scanf(" %c",&k);
    }while(tolower(k)=='y');
    
}
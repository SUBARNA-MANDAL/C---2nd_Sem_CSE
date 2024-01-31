/*
       Write a program to show the abbreviation of a person's name
*/
#include<stdio.h>
#include<ctype.h>
#define n 50
void abbreviation(char k[]){
    int i;
    printf("%c.",toupper(k[0]));    //print the 1st letter of the name.

    for(i=1;k[i]!='\0';i++){            //print the 1st letter of surnames accordingly.
        if(k[i-1]==' ')   printf("%c.",toupper(k[i]));  //if previous letter is ' ' then next letter is printed.
    }
}
void main(){
    char str[n];
    printf("Enter the name --> ");        //taking the input string.
    scanf("%[^\n]s",&str);
    abbreviation(str);                  //call the abbreviation function.
}
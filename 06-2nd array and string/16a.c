/*
    Calculate the frequency of the vowels(a, e, i, o, u) in statement given by the user.
*/
#include<stdio.h>
#include<ctype.h>
#define n 100
void main(){
    int c=0,i,f[5]={0};
    char  k[n];
    printf("Enter the statement : ");   //sentence input taking
        scanf("%[^\n]s",&k);            //if %s written then only 1st word is taken 
                                         // as input and remainings are eleminated
    for(i=0;i<k[i]!='\0';i++){                  //vowels number counting
        if(tolower(k[i])=='a')  f[0]++;
        else if(tolower(k[i])=='e')   f[1]++;
        else if(tolower(k[i])=='i')   f[2]++;
        else if(tolower(k[i])=='o')   f[3]++;
        else if(tolower(k[i])=='u')   f[4]++;
    }

    printf("Total vowels --> %d\n",f[0]+f[1]+f[2]+f[3]+f[4]);     //Printing the freeuency of all and individual vowels
    printf("number of 'a' --> %d\n",f[0]);
    printf("number of 'e' --> %d\n",f[1]);
    printf("number of 'i' --> %d\n",f[2]);
    printf("number of 'o' --> %d\n",f[3]);
    printf("number of 'u' --> %d\n",f[4]);
    
}
/*
        Write a program to show a string whether it is palindrome or not with and without using string 
        library function.
*/
#include<stdio.h>
#include<string.h>
#define n 100
int stringLenght(char a[]){         //For calculate the length of the given string
    int i=0;
    while(a[i]!='\0')   i++;
    return i;                       //Return the length
}
int without(char p[]){               // check if the string is palindrome without using string library.
    int l = 0;                      //starting and ending inden of string
    int r = stringLenght(p)-1;
    while(l<r){                     //check every element of the string and its reverse.
        if(p[l]!=p[r]){             // if any mismatch found then return 0(not palindrome.)
            return 0;
            break;
        }
        l++;
        r--;
    }
    return 1;
}
int usingstr(char p[]){             // check if the string is palindrome using string library.
    char rev[n];                    
    strcpy(rev , p);                //copy string p to rev.
    strrev(rev);                    //reverse the string.
    return !(strcmp(rev,p));         //If reverse and original are same then return 1;
}                                    //strcmp() return 0 when both are same that's why '!' is used. 
void main(){
    char k[n];
    int sw;
    printf("Enter the string --> ");        //taking the input string
    scanf("%[^\n]s",&k);

    printf("\n\t|-----------------------------------------------|");
    printf("\n\t|\t1 For Using string library\t\t|\n\t|\t2 for without using string library\t|");  //Taking the required check technique
    printf("\n\t|-----------------------------------------------|\n");
    printf("\nEnter your choice --> ");
    scanf("%d",&sw);
    
    if(sw==1){                                                          //using string library
        if(usingstr(k))   printf("\n==> '%s' is palindrome.\n",k);
        else    printf("\n==> '%s' is not palindrome.\n",k);
    }
    else{                                                              //without using string library   
        if(without(k))   printf("\n==> '%s' is palindrome.\n",k);
        else    printf("\n==> '%s' is not palindrome.\n",k);
    }
}
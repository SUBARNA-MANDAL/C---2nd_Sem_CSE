/*
    Write a program to create a filename "Profile.txt" and write
    your details in that file and copy the content of that file 
    into another file "myfile.txt"
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *source;           //file type pointer is created.
    FILE *target;           

    source = fopen("profile.txt","w");      //open or create file "profile.txt" and write in 'w' mode.   
    if(source == NULL){                     //if file is not opened successfully
        printf("Unable to create profile.txt.");
        return 1;
    }

    fputs("      ---My profile---\n",source);   //putting the data to profile.txt
    fputs("Name - John Wick\n",source);
    fputs("job - JAVA Developer.",source);

    fclose(source);                              //file is closed after being used.
    printf("profile.txt file is successfully created and some details is  provided.");

    source = fopen("profile.txt","r");      //open profile.txt in "r" mode
    target = fopen("myprofile.txt","w");      //open myprofile.txt in "w" mode

    if(target == NULL || source == NULL){      //if not created successfully.
        printf("unable to copy.");
        return 1;
    }
    char ch;
    while((ch=fgetc(source)) != EOF){       //copying/read from source file ->stored it 
        fputc(ch,target);                   //in char --> write character by char in target
    }

    fclose(source);         //both files are now closed.
    fclose(target);
    printf("\ncontents are coppied from profile.txt to myprofile.txt");
    return 0;
}
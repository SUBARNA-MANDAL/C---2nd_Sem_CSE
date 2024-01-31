/*
        Write a program to create a structure with the fields as name,roll no and marks (integer).
        From this create a student database.
        Display the name of all the students having highest marks. Use dynamic memory 
        allocation for better memory utilization. 
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
struct student{     //structure student
    char name[20];
    int roll;
    int marks;
};
void topscorer(int n,struct student* students){ //printing the student name having highest marks
    int max=0,i;
    for(i=0;i<n;i++){
        if(students[i].marks>max)   max=students[i].marks;  //highest number input is taken
    }
    printf("\nHighest marks is %d",max);
    for(i=0;i<n;i++){       //printing studnets name with highest marks
        if(max==students[i].marks)  printf("\n%s got the highest marks.",students[i].name);
    }
}
void main(){
    int n,i;
    printf("Enter the number of students --> ");
    scanf("%d",&n);
    struct student* students = (struct student *)malloc(n*sizeof(struct student));
                                                                // dynamic memory allocated and starting address is stored at syudents pointer of type struct student
    printf("<-----------Enter %d students data ------------->",n); //input "n" students details
    for(i=0;i<n;i++){
        printf("\nEnter %d students name --> ",i+1);
        scanf(" %[^\n]s",&students[i].name);
        printf("Enter %d students roll --> ",i+1);
        scanf("%d",&students[i].roll);
        printf("Enter %d students marks --> ",i+1);
        scanf("%d",&students[i].marks);
    }
    for(i=0;i<n;i++){                       //input students data printing
        printf("students name --> %s\n",students[i].name);
        printf("students roll --> %d\n",students[i].roll);
        printf("students marks --> %d\n",students[i].marks);
    }
    topscorer(n,students);
    free(students);
}
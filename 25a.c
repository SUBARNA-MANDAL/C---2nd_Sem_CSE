/*

Write a program to create a structure with the fields as name, roll no and marks (integer).
From this create a student database.
Display the name of all the students having highest marks. Use dynamic memory 
allocation for better memory utilization. 

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    char name[10];
    int roll;
    int marks;
};
void topscorer(int n,struct student* students){
    int max=0,i;
    for(i=0;i<n;i++){
        if(students[i].marks>max)   max=students[i].marks;
    }
    printf("\nHighest marks is %d",max);
    for(i=0;i<n;i++){
        if(max==students[i].marks)  printf("\n%s got the highest marks.");

    }
}
void main(){
    int n,i;
    printf("Enter the number of students --> ");
    scanf("%d",&n);
    struct student *students = (struct student *)malloc(n*sizeof(n));

    printf("<-----------Enter %d students data ------------->",n);
    for(i=0;i<n;i++){
        printf("\nEnter %d students name --> ",i+1);
        scanf("%s", students[i].name);
        printf("Enter %d students roll --> ",i+1);
        scanf("%d",&students[i].roll);
        printf("Enter %d students marks --> ",i+1);
        scanf("%d",&students[i].marks);
    }
    topscorer(n,students);
    free(students);
}
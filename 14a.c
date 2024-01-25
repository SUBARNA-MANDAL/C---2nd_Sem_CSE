/*

Write a program to find a key value from an integer array. 


*/

#include<stdio.h>
void Linear(int p[],int n,int key){
    int i;
    for(i = 0;i<n;i++){
        if(p[i]==key) printf("%d is found at position %d",p[i],i+1);
    }
}
void Binary(int p[],int n,int key){

}
void main(){
    int a[20],n,k,ch,i;
    printf("Enter the number of elements of the array : ");    scanf("%d",&n);
    printf("Enter %d elements \n--> ",n);
    for(i=0;i<n;i++)    scanf("%d",&a[i]);

    printf("Enter the searching element : ");
    scanf("%d",&k);

    printf("\n\t|-------------------------------|");
    printf("\n\t|\t1 For Linear search\t|\n\t|\t2 for Binary Search \t|");
    printf("\n\t|-------------------------------|\n");
    printf("\nEnter your choice --> ");
    scanf("%d",&ch);

    if(ch==1)   Linear(a,n,k);
    else if(ch==2)  Binary(a,n,k);
}
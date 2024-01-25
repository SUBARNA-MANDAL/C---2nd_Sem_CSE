/*

Write a program to sort the elements of an integer aray in Descending order. (Use Bubble or Insertion or Selection Sort)

*/
#include<stdio.h>
void swap(int *a,int *b){
    *a = *b + *a - (*b = *a);
}
void bubble(int p[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(p[j]>p[j+1]) swap(&p[j],&p[j+1]);
        }
    }
}
void selection(int p[],int n){
    int i,j,min;
    for(i=0;i<n-1;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(p[min]>p[j])    min = j;
        }
        if(i!=min)  swap(&p[min],&p[i]);
    }
}
void insertion(int p[],int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        temp = p[i];
        j = i-1;
        while(j>=0 && temp<p[j]){
            p[j+1] = p[j];
            j--;
        }
        p[j+1] = temp;
    }
}
void main(){
    int a[20],n,ch,i,j;
    printf("\nEnter the number of elements of the array : ");    scanf("%d",&n);
    printf("Enter %d elements =>\n",n);
    for(i=0;i<n;i++)    scanf("%d",&a[i]);
    
    printf("\t|-------------------------------|");
    printf("\n\t|\t1 For Bubble sort\t|\n\t|\t2 for insertion sort\t|\n\t|\t3 for selection sort \t|");
    printf("\n\t|-------------------------------|\n");
    printf("\nEnter your choice --> ");
    scanf("%d",&ch);

    printf("Before sorting the array elements are => ");
    for(i=0;i<n;i++)    printf("%d ",a[i]);

    switch(ch){
        case 1 :
            bubble(a,n);
            break;
        case 2 :
            selection(a,n);
            break;
        case 3 :
            insertion(a,n);
            break;
        default :   printf("Invalid input given.");
    }
    printf("\nAfter sorting the array elements are => ");
    for(i=0;i<n;i++)    printf("%d ",a[i]);
}


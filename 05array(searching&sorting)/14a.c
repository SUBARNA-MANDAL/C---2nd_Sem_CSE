/*
     Write a program to find a key value from an integer array. 
*/
#include<stdio.h>
void Linear(int p[],int n,int key){     //Linear search function
    int i;
    for(i = 0;i<n;i++){
        if(p[i]==key) printf("%d is found at position %d",p[i],i+1);
    }
}
void Binary(int p[],int n,int key){     ///Binary search function
    int l=0,u=n,f=1,mid;
    while(l<=u){
        mid = (l+u)/2;
        if(p[mid]==key){            //Element found
            printf("%d is found at position %d",p[mid],mid+1);
            f=0;
            break;
        }
        else if(p[mid]<key){
            l=mid+1;
        }
        else  u = mid-1;
    }
    if(f)   printf("%d is not found in the array.",key);
}
void sortass(int p[],int n){        //Bubble sort function for binary search 
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(p[j]>p[j+1]){
                p[j] = p[j]+p[j+1];
                p[j+1] = p[j]-p[j+1];
                p[j] = p[j]-p[j+1];
            }
        }
    }
}
void main(){
    int a[20],n,k,ch,i;
    printf("Enter the number of elements of the array : ");    scanf("%d",&n);  //Taking number of elements of the array
    printf("Enter %d elements \n--> ",n);   //Taking the n elements
    for(i=0;i<n;i++)    scanf("%d",&a[i]);

    printf("\n\t|-------------------------------|");
    printf("\n\t|\t1 For Linear search\t|\n\t|\t2 for Binary Search \t|");  //Taking the required search technique
    printf("\n\t|-------------------------------|\n");
    printf("\nEnter your choice --> ");
    scanf("%d",&ch);

    if(ch==2){
        sortass(a,n);   //For binary search array must be sorted.}
        printf("\nCurrent the array is : ");
        for(i=0;i<n;i++)    printf("%d ",a[i]);
    }

    printf("\nEnter the searching element : "); //Input for the search element
    scanf("%d",&k);

    if(ch==1)   Linear(a,n,k);      //Linear search operation
    else if(ch==2)  Binary(a,n,k);  //Binary search opreation
}
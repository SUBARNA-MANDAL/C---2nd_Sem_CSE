/*
    Write a program to multiply a 3X2 integer matrix by its transpose.
*/
#include<stdio.h>
void main(){
    int i,j,k,a[20][20],r,c,s;

    printf("Enter the matrix row no --> ");
    scanf("%d",&r);
    printf("Enter the matrix column no --> ");
    scanf("%d",&c);

    printf("\n<--------------Enter the matrix elements ---------------->\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter (%d,%d) position value : ",i,j);  scanf("%d",&a[i][j]);
        }
    }

    printf("\nThe matrix is --->\n");       //input matrix printing
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nThe transpose matrix is -->\n");  ///transpose matrix
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }

    printf("The resultant of (matrix * transpose) is -->\n");       //mutiplication result
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            s=0;
            for(k=0;k<c;k++){
                s+=a[i][k]*a[j][k];
            }
            printf("%d ",s);
        }
        printf("\n");
    }
}
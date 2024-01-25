/*
Generate the patterns ----

    *                  a b c d e                
  * * *                  f g h       
* * * * *                  i   

*/

#include<stdio.h>
void main(){
    int n,i,j,ch;
    char c='a';
    printf("Enter which types of pattern do u want to print ---");
    printf("\n1)     *           2)        a b c d e");              
    printf("\n     * * *                     f g h");   
    printf("\n   * * * * *                     i\n");
    printf("Enter which types of pattern do u want to print --> ");
    scanf("%d",&ch);

    printf("Enter the number of rows : ");
    scanf("%d",&n);

    if(ch==1){
        for(i=0;i<n;i++){
            for(j=0;j<n-i-1;j++)  printf("  ");
            for(j=0;j<2*i+1;j++)  printf("* ");
            printf("\n");
        }
    }
    else if(ch==2){
        for(i=0;i<n;i++){
            for(j=0;j<i;j++)    printf("  ");
            for(j=0;j<2*n-2*i-1;j++)    printf("%c ",c++);
            printf("\n");
        }     
    }
}
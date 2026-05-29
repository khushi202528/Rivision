// Ques : Print the given pattern
//  *    
//  *  
//*****
//  *  
//  *   

#include <stdio.h>
int main(){
    int n ;
    printf("enter the number");
    scanf("%d",&n);
    for(int i = 0 ;i<=n;i++){
        for(int j = 0;j<=n;j++){
            if( j==n/2 || i==n/2 ) // for n*n pattern if(j==n/2 + 1 ||i==n/2 + 1) then
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}
// Print the given pattern

// ****
// ***
// **
// *

// Star Triangle Ulta


#include <stdio.h>
int main(){
    int n;
    printf("enter the no of rows");
    scanf("%d",&n);
    int a = n;
    for(int i = n; i>=0 ; i++){
        for(int j =0; j<=a; j++){
            printf("*");
        }
        
        printf("\n");
    }
}
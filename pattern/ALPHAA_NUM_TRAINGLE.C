// HW : Print the given pattern

// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5

// Alphabet Triangle

#include <stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    for(int i = 0 ; i< n ;i++){
        for(int j = 0;j<=i;j++){
            if( i%2==0){
                printf("%d",j+1);   // 1 (because j is 0)
            }
            else
            printf("%c",j+65);
        }
        printf("\n");
    }    
}
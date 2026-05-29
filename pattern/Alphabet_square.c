// Ques : Print the given pattern

// A B C D
// A B C D
// A B C D
// A B C D

// Alphabet Square


#include <stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    for(int i = 0 ; i< n ;i++){
        for(int j =0;j<=n;j++){printf("%c ",j+65);}
        printf("\n");

    }

        
}
// *Ques : Print the given pattern

// 1
// 0 1
// 1 0 1
// 0 1 0 1

// 0 & 1 Triangle

#include <stdio.h>
int main (){
    int n;
    printf(" number");
    scanf("%d",n);
    for(int i =0; i<= n; i++){
        for ( int j=0; j<=i ; j++){
            if ((i+j)%2==0){
                printf("1");
            }
            else{
                printf("0");
            }
        }        printf("\n");
    }
}
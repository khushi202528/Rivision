// *Ques : Print the given pattern

//   *
//  **
// ***
//**** 


#include <stdio.h>
int main (){
    int n;
    printf("number");
    scanf("%d",&n);
    for( int i =0;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            printf(" ",n-j);
        }
        for(int k =0; k<=i;k++){
            printf("*",k);
        }
    
        printf("\n");
    }
}
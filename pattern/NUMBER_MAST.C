// Ques : Print the given pattern


// *******
// *** ***
// **   **
// *     *
// Number Pyramid Mast


#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of rows ");
    scanf("%d", &n);
    // left side
    for (int i = 0; i < n; i++){
        for(int j =0; j<=n/2+1-i;j++){
            printf("*");
        }
        for(int k =0;k<=2*i-1;k++){
            printf(" ");
        }
        for(int l = 0;l<=n/2+1-i;l++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
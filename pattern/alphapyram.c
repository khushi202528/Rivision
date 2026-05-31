// : Print the given pattern

// Alphabet Pyramid
//      A
//    A B C
//  A B C D E
// A B C D E F G


#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++){
        printf(" ");

    }
        for(int k =0;k<=2*i;k++){
            printf("%c",k+65);
        }
       
        printf("\n");
    }
    return 0;
}
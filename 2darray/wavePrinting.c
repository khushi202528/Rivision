// Question: Wave Print of a Matrix

// Given a matrix of size n × m, print its elements in wave form row-wise.

// Even indexed rows (0, 2, 4...) ko left to right print karo.
// Odd indexed rows (1, 3, 5...) ko right to left print karo.
// Example

// Input:

// 1 2 3
// 4 5 6
// 7 8 9

// Output:

// 1 2 3 6 5 4 7 8 9

#include <stdio.h>
int main()
{

    // input of matrix
    int n;
    printf("enter number of rows in matrix  = ");
    scanf("%d", &n);

    int m;
    printf("enter number of coloum in matrix  = ");
    scanf("%d", &m);

    int mat1[n][m];
    printf("enter the matrix  ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\n");

    printf("matrix  :");
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        
        {
            if (i%2==0){
                for (int j = 0; j < m; j++){
                printf("%d",mat1[i][j]);
            }

            }
            if(i%2!=0){
                for(int j = n-1;j>=0;j--){
                printf("%d",mat1[i][j]);
                }
            }
             
        }
        printf("\n");
    }
}

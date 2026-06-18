// multiplication of matrix
#include <stdio.h>
int main()
{

    // input of matrix 1
    int n;
    printf("enter number of rows in matrix 1 = ");
    scanf("%d", &n);

    int m;
    printf("enter number of coloum in matrix 1 = ");
    scanf("%d", &m);

    int mat1[n][m];
    printf("enter the matrix 1 ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\n");

    // input of matrix 2

    int p;
    printf("enter number of rowp in matrix 2 = ");
    scanf("%d", &p);

    int q;
    printf("enter number of coloum in matrix 2 = ");
    scanf("%d", &q);

    int mat2[p][q];
    printf("enter the matrix 2 ");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("\n");
    // printinh both of the matrix
    printf("matrix 1 :");
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("matrix 2 :");
    printf("\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // multiplication of matrix 1 and matrix 2 :
    int result[n][q];
    printf("multiplication of matrix 1 and matrix 2 : ");printf("\n");
    if (m != p)
        printf("invailed input");
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < q; j++)
            {
                result[i][j] = 0;

                for (int k = 0; k < m; k++)
                {
                    result[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
    }
  

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}
// HW : Print the given pattern

//**********
//*        *
//*        *
//**********

#include <stdio.h>
int main()
{
    int n;
    printf("enter number of rows : ");
    scanf("%d", &n);
    int m;
    printf("enter number of colums : ");
    scanf("%d", &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
            {
                printf("*");
            }
        }
        else
        {
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}

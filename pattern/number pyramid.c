// HW : Print the given pattern

// Number Pyramid
// 1
// 1 2 3
// 1 2 3 4 5
// 1 2 3 4 5 6 7

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0;j<=2*i;j++){
            printf("%d",j+1);
        }
        printf("\n");
    }
}
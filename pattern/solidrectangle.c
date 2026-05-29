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
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// explaining the code:
// This code is a simple C program that prints a solid rectangle of asterisks (*)
// two loops are used to achieve this. The outer loop runs 'n' times, which represents the number of rows,
// and the inner loop runs 'm' times, which represents the number of columns. In each iteration of the inner loop,
// an asterisk is printed, and after the inner loop completes, a newline character is printed to move to the next line.
// The program takes user input for the number of rows and columns to determine the size of the rectangle.



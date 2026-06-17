// Question: Given a matrix of size n × m, entered by the user, write a C program to print its transpose.

// Example:

// Input Matrix:
// 1 2 3
// 4 5 6

// Transpose:
// 1 4
// 2 5
// 3 6

#include <stdio.h>

int main()
{

    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // arr[i][j] = arr[j][i];
            printf("%d ",arr[i][j]);

        }printf("\n");

    }

    printf("\n");
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
            // arr[i][j] = arr[j][i];
             int temp        = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        };

    }printf("\n");

       for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // arr[i][j] = arr[j][i];
            printf("%d " ,arr[i][j]);

        }printf("\n");

    }

    
    



}
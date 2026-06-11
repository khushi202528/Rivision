// Question:

// Given an array of integers, modify the array according to the following conditions:

// 1. Increase all elements at even indices by 10.
// 2. Replace all elements at odd indices with their second multiple (i.e., multiply them by 2).

// After performing the required modifications, print the updated array.

// Example:

// Input:
// arr[] = {1, 2, 3, 4, 5, 6, 7, 8}

// Output:
// {11, 4, 13, 8, 15, 12, 17, 16}

#include <stdio.h>
int main()
{
    int khu[] = {1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i < 7; i++)
    {
        if (i % 2 == 0)
        {
            khu[i] = khu[i] + 10;
        }
        else
        {
            khu[i] = khu[i] * 2;
        }

        printf("%d ", khu[i]);
    }

    printf("\n");
    return 0;
}
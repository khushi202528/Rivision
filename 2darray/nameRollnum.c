#include <stdio.h>

int main()
{
    int arr[4][2];  // 4 students, 2 columns (Roll No, Marks)

    for (int i = 0; i < 4; i++)
    {
        printf("Enter Roll Number of Student %d: ", i + 1);
        scanf("%d", &arr[i][0]);

        printf("Enter Marks of Student %d: ", i + 1);
        scanf("%d", &arr[i][1]);
    }

    printf("\nRoll No\tMarks\n");

    for (int i = 0; i < 4; i++)
    {
        printf("%d\t%d\n", arr[i][0], arr[i][1]);
    }

    return 0;
}
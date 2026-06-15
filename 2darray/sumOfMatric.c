// Ques : Find the sum of a given matrix of n x m.

// #include <stdio.h>
// int main() {
//     int n,m;
//     printf("enter the number of row");
//     scanf("%d",&n);
//     printf("enter the number of colum");
//     scanf("%d",&m);
//     int matrix[n][m];
//     int sum =0;
//     for ( int i =0;i<n;i++){
//         for(int j =0;j<m;j++){

            
//             scanf("%d",&matrix[i][j]);
//             sum = sum + matrix[i][j];


           
//             // 

//         }
//     }
//     printf("%d",sum);
// return 0;

// }
#include <stdio.h>

int main() {
    int n,m;
    printf("enter the number of row");
    scanf("%d",&n);

    printf("enter the number of colum");
    scanf("%d",&m);

    int matrix[n][m];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j];

        }
    }

    printf("%d", sum);
    return 0;
}
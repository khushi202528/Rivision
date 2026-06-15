// Given a matrix ‘a’ of dimension n x m and 2
// coordinates (l1, r1) and (l2, r2). Return the sum of
// the rectangle from (l1,r1) to (l2, r2).


#include<stdio.h>
int main(){
    int matrix[4][2]={{1,3},{3,4},{4,5},{5,6}};
    int sum=0 ;
    for (int i=0;i<2;i++){
        for(int j =0;j<2;j++){
            sum += matrix[i][j];



        }
    } printf("%d",sum);
}
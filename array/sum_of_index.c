// Find the difference between the sum of elements at even indices and the sum of elements at odd indices
// arr[5] = {1, 2, 3, 4, 5};
// Even indices → 0, 2, 4 → 1 + 3 + 5 = 9
// Odd indices → 1, 3 → 2 + 4 = 6

// Difference = 9 - 6 = 3

#include<stdio.h>
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int even_sum=0;
    int odd_sum = 0;
    for(int i =0; i<5;i++){
        if(i%2==0){
            even_sum=even_sum+ arr[i];
        
        }
        else
        odd_sum = odd_sum+arr[i];

    }
    int difference;
    difference = even_sum - odd_sum;
    printf("%d - %d = %d",even_sum,odd_sum,difference);
    return 0;


}
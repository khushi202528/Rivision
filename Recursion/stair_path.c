//**Question:**
// A person is standing at the bottom of a staircase with `n` stairs and
// can climb either 1 or 2 stairs at a time.
// Write a recursive function to find the total number of ways to reach the nth stair.


#include<stdio.h>
int stair(int n){
    if(n==1 ) return 1;
    if(n==2) return 2;
    int x =stair(n-1);
    int y = stair(n-2);
    return (x+y);
}

int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("%d", stair(n));
    return 0;
}


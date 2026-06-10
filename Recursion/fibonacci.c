// Write a function to calculate the nth
// fibonacci number using recursion.


#include <stdio.h>
int fibonacci(int n){
    if(n==1){return 1;};
    if(n==0){return 0;};
    return fibonacci(n-1)+fibonacci(n-2); //mutilpke calls to tge fuction

}
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("%d", fibonacci(n));
    return 0;
}
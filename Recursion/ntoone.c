    //print n to one using recursion
#include <stdio.h>
void repeat( int n ){
    if(n==0)
        return;
    printf("%d ",n);
    printf("\n");
    repeat(n-1);}

int main(){
    int n ;
    printf("enter the number=");
    scanf("%d",&n);
    repeat(n);
    return 0;
}

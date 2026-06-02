#include <stdio.h>

int sum(int x,int y){
    return(x+y);
}

int main(){
    int a,b;
    printf("num1=");
    scanf("%d",&a);

    printf("num2=");
    scanf("%d",&b);

    int add=sum(a,b);
    printf("%d",add);

    return 0;
}
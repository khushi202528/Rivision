// Ques : Print the given pattern

// 1
// 1 3
// 1 3 5
// 1 3 5 7

// Odd Number Triangle


// ohkay so ism acc to me pehle tho divisible by 2 wala if else lagana hai 
// after ab humkpo ye pattern choye hoga worte jisko apne pehle bhi likha
// tho ism ab outer line wala code hoyega fir inner code kai liye second woj condition wali  oine lgaye gey jism j <= i kregey aopn lets see

#include <stdio.h>
int main(){
    int n;
    printf("enter the no of rows");
    scanf("%d",&n);
    for (int i = 1; i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",2*j-1);
        }
        printf("\n");
    }
    return 0;
}
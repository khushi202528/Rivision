//--------------------saum of array -----------------

#include <stdio.h>
int main(){
    int n ; 
    printf("enyter the number = ");
    scanf("%d",&n);
    int num[n];
    int count = 0;

    for(int i =0;i<n;i++){
        printf("enter array %d = ",i+1);
        scanf("%d",&num[i]);
        count = count + num[i];

    }
    printf("%d",count);

    return 0;
}
//--------------print from 1 to n using recursion----------------
// repeat(5) -> repeat(4) -> repeat(3) -> repeat(2) -> repeat(1) -> repeat(0)
//
// Jab n = 0 ho jata hai to base case true ho jata hai
// aur function return karke recursion ko stop kar deta hai.
//
// Ab function stack se wapas aana shuru karta hai:
//
// repeat(1) -> print 1
// repeat(2) -> print 2
// repeat(3) -> print 3
// repeat(4) -> print 4
// repeat(5) -> print 5
//
// Isliye output 1 2 3 4 5 aata hai.
//
// Recursive call printf se pehle hai,
// isliye printing return hote waqt hoti hai.
#include <stdio.h>
void repeat(int n)
{
    if(n <= 0)
        return;

    repeat(n - 1);
    printf("%d ", n);
}
int main(){
    int n ;
    printf("enter the number : ");
    scanf("%d",&n);
    repeat(n);
    return 0;
}


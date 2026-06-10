// Power function using logarithmic recursion

#include <stdio.h>

int powerlog(int a, int b)
{
    if(b == 0)          // a^0 = 1
        return 1;

    int x = powerlog(a, b/2);   // calculate a^(b/2)

    if(b % 2 == 0)      // if b is even
        return x * x;   // a^b = (a^(b/2))²

    else                // if b is odd
        return a * x * x; // a^b = a × (a^(b/2))²
}

int main()
{
    int a, b;

    printf("Enter base: ");
    scanf("%d", &a);

    printf("Enter power: ");
    scanf("%d", &b);

    int r = powerlog(a, b); // function call

    printf("%d", r);

    return 0;
}
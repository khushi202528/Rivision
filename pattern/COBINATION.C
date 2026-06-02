#include <stdio.h>

int main() {
    int n, r;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter r: ");
    scanf("%d", &r);

    int nfact = 1;   // n!
    int rfact = 1;   // r!
    int nrfact = 1;  // (n-r)!

    for (int i = 2; i <= n; i++) {
        nfact = nfact * i;          // previous factorial value * current i

    }

    for (int i = 2; i <= r; i++) {
        rfact = rfact * i;          // previous factorial value * current i
    }

    for (int i = 2; i <= n - r; i++) {
        nrfact = nrfact * i;         // previous factorial value * current i
    }


    // nCr = n! / (r! * (n-r)!)
    int ncr = nfact / (rfact * nrfact);

    printf("nCr = %d\n", ncr);

    return 0;
}
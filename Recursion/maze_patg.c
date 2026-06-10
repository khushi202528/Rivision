
// -------------MAZE PATH---------

// cr = current row
// cc = current column
// er = ending row
// ec = ending column

#include <stdio.h>

int maze(int cr, int cc, int er, int ec)
{
    // destination pahunch gaye
    if(cr == er && cc == ec)
        return 1;

    // last row me ho, sirf right ja sakte hain
    if(cr == er)
        return maze(cr, cc + 1, er, ec);

    // last column me ho, sirf down ja sakte hain
    if(cc == ec)
        return maze(cr + 1, cc, er, ec);

    // right + down dono ways
    return maze(cr, cc + 1, er, ec)
         + maze(cr + 1, cc, er, ec);
}

int main()
{
    int n = 3, m = 3;

    printf("%d", maze(1, 1, n, m));

    return 0;
}
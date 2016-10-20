
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int p(int n)
{
    return n*(3*n - 1)/2;
}

int is_p(int n)
{
    for (int i = 1; i <= n; i++) {
        if (p(i) == n) return i;
    }
    return 0;
}

int main()
{
    int i = 1;
    int j = 2;
    int p_i = p(i);
    int p_j = p(j);
    while (!(is_p(p_i - p_j) && is_p(p_i + p_j))) {
        printf("|%d - %d| = %d (%d)\n", p_i, p_j, abs(p_i - p_j), is_p(abs(p_i - p_j)));
        printf(" %d + %d  = %d (%d)\n\n", p_i, p_j, p_i + p_j, is_p(p_i + p_j));
        if (j - i == 1) {j++;}
        else {i++;}
        p_i = p(i);
        p_j = p(j);
    }
    //
    // printf("|%d - %d| = %d (%d)\n", p_i, p_j, abs(p_i - p_j), is_p(abs(p_i - p_j)));
    // printf(" %d + %d  = %d (%d)\n", p_i, p_j, p_i + p_j, is_p(p_i + p_j));

    // for (int i = 0; i < 10; i++) {
    //     printf("%4d %3d\n", p(i+1), is_p(p(i+1)));
    // }

    return 0;
}

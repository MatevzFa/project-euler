#include <stdio.h>

int main()
{
    int a = 0;
    int b = 1;
    int c = 0;
    int sum;
    
    while (c < 4000000) {
        c = a + b;
        a = b;
        b = c;
        if (c % 2 == 0) sum += c;
    }
    
    printf("%d\n", sum);
    
    return 0;
}